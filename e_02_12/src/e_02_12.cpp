/*
演習 2-12 2つの値を読み込み大きい値 小さい値それぞれを表示する処理

作成日 2017年5月4日

作成者 平澤敬介

*/

#include<iostream>

using namespace std;

int main()
{

	int sample1,sample2;// 変数の定義 代入するため	 初期化はしなくてよい

	// 単なる宣言 挿入子で文字列を流す
	cout << "大きい値と小さい値を表示します\n";
	// 変数 a b の値を代入する部分 範囲は 特にないため整数であれば
	// どの値でも可脳
	cout << "整数値 sample1 :";
	// sample1にキーボードからの値を代入する
	cin >> sample1;
	// 実数ならば入力に制限はない
	cout << "整数値 sample2 :";
	// sample2にキーボードからの値を代入する
	cin >> sample2;

	// 仮に sample1 = 10 sample2 = 5 ならば
	// 最初のif文で処理が行われる
	if(sample1 > sample2) {
	//比較して必ず大きい値となる
		cout << "大きい値 :" << sample1 << "\n";
	//比較して必ず小さいい値となる
		cout << "小さい値 :" << sample2 << "\n";
	// 仮に sample1 = 5 sample2 = 10 ならば
	// 次のif文で処理が行われる
	} else if(sample1 < sample2) {
	//比較して必ず大きい値となる
		cout << "大きい値 :" << sample2 << "\n";
	//比較して必ず小さい値となる
		cout << "小さい値 :" << sample1 << "\n";
	// 仮に sample1 = 10 sample2 = 10 ならば
	// 最後ののif文で処理が行われる
	} else if(sample1 == sample2) {
	// 値を表示せず等しいことだけを告げる
		cout << "二つの値は同じです。\n";
	}

	return 0;
}
