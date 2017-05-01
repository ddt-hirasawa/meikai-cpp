// 演習6-19 List6－21 関数rを不正な添字に対して安全に動作するように書き換える

#include<iostream>

using namespace std;

const int a_size = 5;// 配列の要素数を5で固定する

// 配列 a への参照を返却する関数
int& r(int idx)
{

	static int a[a_size];// 静的記憶域期間で配列を作成する 通常はこの配列の参照を返却する

	static int b = 6; // 静的記憶域期間 にある 変数b 上の配列の要素数から
				//外れた場合 この変数の参照を返却する

	// 定義している配列の範囲を指定するためにif文を使う
	if(idx < a_size && idx >= 0)
		// 配列要素中 ならば指している配列の参照を返却する
	    return a[idx];
	else
		 // 配列の要素から外れてきた場合、bへの参照を返却する。
		return b;
}

int main()
{
	//配列すべてに値を代入するためループ処理を行う
	for(int i=0;i < a_size;i++) r(i) = i;

	// －10 から ９ までの範囲で表示を行うためループ処理を行う
	// 0　～　4 の範囲以外は 別の参照が返却される
	for(int i=-10;i < 9;i++) cout << "r(" << i << ") = " << r(i) << "\n";

	return 0;
}
