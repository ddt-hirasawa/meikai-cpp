
#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2,sample3,min;// 入力に使う変数と 最小値に使う変数を定義 すべて後で代入されるため
									// 初期化はしなくてよい

	// 変数 の値をキーボードから読み込む部分
	//値の範囲はないので整数であれば どの値でも可能
	cout << "整数を入力してください。\n";
	//sample1に代入する値の入力を促します
	cout << "整数 sample1 :";
	//キーボードからの値をsample1に代入します
	cin >> sample1;
	//sample2に代入する値の入力を促します
	cout << "整数 sample2 :";
	//キーボードからの値をsample2に代入します
	cin >> sample2;
	//sample3に代入する値の入力を促します
	cout << "整数 sample3 :";
	//キーボードからの値をsample3に代入します
	cin >> sample3;


	min = sample1;// ここで最小値を代入 どれでもよいが 最小値を最初に入力した値にする

	//仮に 最小値が b より大きければ
	if(sample2 <= min) {
	//最小値は b に更新される
		min = sample2;
	//仮に 最小値が c より大きければ
	} else if(sample3 <= min) {
	//最小値は c に更新される
		min = sample3;
	}

	// 上のif文を通過してきた値が 最小値 min になるためここで
	// 必ず一番小さい値が代入されていることになる
	cout << "最小値は" << min << "です。";

	return 0;
}
