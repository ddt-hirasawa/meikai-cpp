/*
演習2-11 3つの値のキーボードから読み込み,中央値を表示する処理

作成日 2017.5.4

作成者 平澤敬介
 */

#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2,sample3,medium;// 入力に使う変数と 中央値に使う変数を定義 すべて後で代入されるため
										// 初期化はしなくてよい

	// 変数 a,b,c の値をキーボードから読み込む部分
	//値の範囲はないので整数であれば どの値でも可能
	cout << "整数を入力してください。\n";
	//sample1に整数値の入力を促す
	cout << "整数 sample1 :";
	//sample1にキーボードからの値を代入する
	cin >> sample1;
	//sample2に整数値の入力を促す
	cout << "整数 sample2 :";
	//sample2にキーボードからの値を代入する
	cin >> sample2;
	//sample3に整数値の入力を促す
	cout << "整数 sample3 :";
	//sample3にキーボードからの値を代入する
	cin >> sample3;

	medium = sample1;// ここで中央値を代入 どれでもよいが 最初に入力した値を中央値と仮定する

	// 入力した値で 初期化したmedium が一番小さく sample3が一番大きいとき
	if(medium <= sample2 && sample2 <= sample3) {
	//中央値を sample2 としてif文を抜ける
		medium = sample2;
	// 入力した値で 初期化したmedium が一番小さく sample2が一番大きいとき
	} else if(medium <= sample3 && sample3 <= sample2) {
	//中央値を sample3 としてif文を抜ける
		medium = sample3;
	// 入力した値で 初期化したmedium が一番大きく sample3が一番小さいとき
	} else if(sample3 <= sample2 && sample2 <= medium) {
	//中央値を sample2 としてif文を抜ける
		medium = sample2;
	// 入力した値で 初期化したmedium が一番大きく sample2が一番小さいとき
	} else if(sample2 <= sample3 && sample3 <= medium) {
	//中央値を sample3 としてif文を抜ける
		medium = sample3;
	}

	// if文を通過してきた medium は中央値を必ず代入されていることになる
	cout << "中央値は" << medium << "です。";

	return 0;

}
