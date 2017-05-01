// 演習7-16 要素数をキーボードから読み込み double型の配列を動的に生成する
		// 生成に失敗したときの処理も行う

#include<iostream>
// 空ポインタ定数を定義しているライブラリ 0 のこと
#include<cstddef>

using namespace std;

int main()
{
	// 変更点 要素数をキーボードから読み込ムために
	//int型のポインタで オブジェクトを生成する
	int* n = new int(1000);

	// n の指すオブジェクトはキーボードから入力する値となる
	cout << "要素数 : "; cin >> *n;

	cout << "要素数" << *n << "のdouble型の配列を生成\n";

	while(true){
		// double型の記憶域を確保しキーボードから入力された要素数分
		// 配列を動的に生成し続ける
		// nothrow で生成に失敗す前に例外が投げられるので
		// プログラムの保護ができる
		double* x = new(nothrow) double[*n];
		// 通常、配列ｘがNULL(0)になることはない
		//メモリが足りず生成に失敗したときに 空になるが
		// nothrow でその手前で 空と代入されます
	if(x == NULL){
		cout << "配列の生成に失敗しました。プログラムを終了します。\n";
		return 1;
		}
	}
	return 0;
}
