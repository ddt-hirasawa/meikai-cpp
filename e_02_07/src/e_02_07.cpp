/*
演習2-7 2つの実数を読み込み 大きいほうの値を表示する処理

作成日 2017.5.4

作成者 平澤敬介
 */


#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2;// 比較する変数の定義 両方キーボードから読み込むため 初期化はいらない
	int max;			// 大きい値を格納する変数を定義します

		// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数 sample1 :";
		// cin で sample1に値を代入する
	cin >> sample1;
		// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数 sample2 :";
		// cin で sample2に値を代入する
	cin >> sample2;


	max = (sample1 >= sample2 ? sample1 : sample2);	// 条件演算子を使った場合、cout の中に条件演算子を組み込み
													// sample1 が sample2より大きい場合 true となり 左側の値が
													// そうでない場合 false となり 右側の値が代入されます
		// maxに代入された値は sample1,2の大きいほうの値です
	cout << "大きい値は " << max << "です。";

	/* 変更前
		// aとbが比較され 仮に sample1 = 5 sample2 = -1 ならば sample1 が大きいと判断される
	if(sample1 >= sample2) {
		//最初に入力した値が大きい場合の表示を行う
		cout << "大きい値は" << sample1 << "です。";
		//aとbが比較され 仮に sample1 = 10 sample2 = 100 ならば sample2 が大きいと判断される
	} else if(sample1 <= sample2) {
		// 後に入力した値が大きい場合の表示を行う
		cout << "大きい値は" << sample2 << "です。";
	}
*/
	return 0;

}
