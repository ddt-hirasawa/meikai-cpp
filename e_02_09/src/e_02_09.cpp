/*
演習2-9 演習2-8 を改修し 2つの値の差が 10 を基準として大きいか小さいか判断する処理

作成日 2017.5.4

作成者 平澤敬介

 */

#include<iostream>

using namespace std;

int main()
{

	int sample1,sample2;// 比較する変数の定義 両方キーボードから読み込むため 初期化はいらない
	int diff;			// 2値の差を代入する変数を宣言

	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数 sample1 :";
	// cin でsample1に変数を代入する部分
	cin >> sample1;
	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数 sample2 :";
	// cin でsample2に変数を代入する部分
	cin >> sample2;

	diff = (sample1 >= sample2 ? sample1-sample2 : sample2-sample1);//変数への代入は条件演算子式により
																	//必ず0か正の値になります

	// sample1 のほうが大きい場合のとき、その差が11以上なら
	//論理演算子を使って1文で表現しました。
	if(sample1 >= sample2 && diff >= 11) {

	// sample1のほうが大きく差が11以上のときのみ表示を行う
		cout << "それらの差は11以上です。";

	// else だと不十分なので条件を細かに付け加えなければなりません。
	} else if(sample1 >= sample2 && diff <= 10) {

	// sample1のほうが大きく、差が10以下なら表示がされます
		cout << "それらの差は10以下です。";
	}
	// sample2 のほうが大きい場合のとき、その差が11以上なら
	//論理演算子を使って1文で表現しました。
	if(sample2 >= sample1 && diff >= 11) {

	// sample2のほうが大きく差が11以上のときのみ表示を行う
		cout << "それらの差は11以上です。";

	// else だと不十分なので条件を細かに付け加えなければなりません。
	} else if(sample2 >= sample1 && diff <= 10) {

	// sample2のほうが大きく、差が10以下なら表示がされます
		cout << "それらの差は10以下です。";
	}

	return 0;
}
