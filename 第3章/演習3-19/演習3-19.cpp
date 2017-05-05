/*
演習3-19 指定した数字で正方形を表示するプログラム

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{

	int square;// 変数の定義　これが1辺の長さになる

	// この部分で１辺の長さが代入される
	cout << "整数値を入力 :";

	// 変数にキーボードからの値を代入します
	cin >> square;

	// 単なる宣言 n * n の正方形を表示する
	cout << square << "×" << square << "の正方形を出力\n";

	// 0～n-1 までの行のループに入る
	for(int i=0;i<square;i++) {

		// 0～n-1 までの列のループに入る 実際に ＊ を個数文表示する部分
		for(int j=0; j < square; j++) {

			//  ＊　を１文字表示して終わり
			cout << "*";
		}
		// * を表示し終わったのならば 改行して次の行に行く
		cout << "\n";
	}
	return 0;
}
