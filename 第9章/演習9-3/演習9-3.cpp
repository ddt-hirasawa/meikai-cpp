//演習9-3 xの2乗を求める関数テンプレートの作成

#include<iostream>

//値を指定された幅で表示する setw を使うためのライブラリ
#include<iomanip>

using namespace std;

	// 関数テンプレート 2乗 を求める関数の宣言
template <class type> type square(type);

int main()
{
	// int 型 double 型を同時にy表示させるため 1 から 9の整数に
	//0.1を加算してdouble型の値を作る 実行結果を9つ表示するためループ処理を行う
	for(int i=1;i <= 9;i++){
		////double型は int型に0.1を加算した値とする
		double j = i + 0.1;

		//関数テンプレートが int型 double型 で正常に動作することを確認する
		cout << i << "の2乗は " << setw(6) << square(i) << "   "
		<< j << "の2乗は " << setw(6) << square(j)				//
		<< "\n";												//
	}															//
	return 0;	// プログラム終了
}		// 	main文の終わり

//関数テンプレート
template <class type>
type square(type a)
{
	//int型 double型 整数値でも浮動小数点型でも/関数テンプレート１つで補える
	return a*a;
}
