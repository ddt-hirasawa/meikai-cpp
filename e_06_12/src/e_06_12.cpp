/*
演習6-12 b 以上 a 以下の整数の和を返却する関数を製作する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

 // b以上 a以下の全整数の和を出力する関数の宣言
int sum(int a,int b = 1);

int main()
{
	int min,max;	// 変数の定義 この変数に代入される値で関数の範囲が変わってくる

	// 最小値の入力部分
	cout << "最小値 :";

	// キーボードからの値を最小値に代入する
	cin >> min;

	// 最大値の入力部分
	cout << "最大値 :";

	// キーボードからの値を最大値に代入する
	cin >> max;

	// 加算する整数の範囲を表示する部分
	cout << min << " ～ " << max << "までの和は";

	// 関数呼び出し部分 1～10までで ５５を返却
	cout << sum(max,min) << " です。\n";

	// 関数呼び出し部分 ｊ＝１０で 55を返却
	cout << sum(max) << " です。\n";

	return 0;
}

//関数 b以上 a以下の全整数の和を出力する
//仮引数 a -> 最大値 b -> 最小値 この範囲で加算を行う ただし、最小値はデフォルトで 1
//返却値 仮引数で与えられた範囲内での加算が行われた変数 Sum

int sum(int a,int b)
{
	// 関数の内部で 変数を宣言個の変数を返却する
	int Sum = 0;
	// 最小値である bをインクリメントしながら加算していく
	for(;b <= a;b++) {

		// 変数に加算されていく
		Sum += b;
	}
	// 合計をmainに返却する部分 1から１０までで５５を返却
	return Sum;
}
