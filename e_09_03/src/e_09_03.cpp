/*
演習9-3 xの2乗を求める関数テンプレートを作成せよ

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

//値を指定された幅で表示する setw を使うためのライブラリ
#include<iomanip>

using namespace std;

// 関数テンプレート 2乗 を求める関数の宣言
template <class type> type square(type);

int main()
{
	for(int i=1; i <= 9; i++) {

		//double型は int型に0.1を加算した値とし
		double j = i + 0.1;

		//関数テンプレートが int型 double型 で正常に動作することを確認する
		cout	<< i << "の2乗は " << setw(6) << square(i) << "   "

		<< j << "の2乗は " << setw(6) << square(j) << "\n";
	}
	return 0;
}

//関数テンプレート
//関数 2乗値を返却します
//仮引数 型 にこだわらない何らかの実数
//返却値 仮引数と同じ型の2乗値

template <class type>
type square(type a)
{
	//2乗値を返却します
	return a*a;
}
