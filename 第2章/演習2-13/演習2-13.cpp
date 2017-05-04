/*
演習2-13 2つをの整数値を読み込み 大きいほうに並べ替える処理

作成日 2017年5月4日

作成者 平澤敬介
 */

#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2;// 変数の定義 代入するため	 初期化はしなくてよい

	// 変数 a b の値を代入する部分 範囲は 特にないため整数であれば
	// どの値でも可能
	cout << "整数a :";
	//sample1にキーボードからの値を代入する
	cin >> sample1;
	// 整数であればどの値でも可能
	cout << "整数b :";
	//sample2にキーボードからの値を代入する
	cin >> sample2;

	// 単なる宣言 a が大きいように交換する
	cout << "降順に並べ替えます。 (a>b)\n";

	// sample1 が sample2 より小さいときのみ処理を行うため if文を使う
	if(sample1 < sample2){
		// if文内で変数を定義し sample1 を 変数に代入し値を保存する
		int tmp = sample1;
		// a の値を 大きい値 b に更新する
		sample1	=	sample2;
		// b の値を 小さい値 tmp に更新する
		sample2	=  tmp;
	}

	// if文を通過した値に更新されているため a > b の状態になる
	cout << "整数a :" << sample1 << "\n" << "整数b :" << sample2;

	return 0;
}
