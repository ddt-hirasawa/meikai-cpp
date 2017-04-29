// 演習2-10 3つの値を読み込み最小値を返却する処理

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,min;// 入力に使う変数と 最小値に使う変数を定義 すべて後で代入されるため
	// 初期化はしなくてよい

	// 変数 a,b,c の値をキーボードから読み込む部分
	//値の範囲はないので整数であれば どの値でも可能
	cout << "整数を入力してください。\n" << "整数a :"; cin >> a;
	cout << "整数b :";cin >> b;
	cout << "整数c :";cin >> c;

	// ここで最小値を代入 a,b,c どれでもよいが 最小値をaと仮定する
	min = a;

	//仮に 最小値が b より大きければ 最小値は b に更新される
	// 小さければ何もしないためこの時点で
	// min <= a ,b となる
	if(min >= b) min = b;
	//仮に 最小値が c より大きければ 最小値は c に更新される
	// 小さければ何もしないためこの時点で
	// min <= a ,b, c となる
	if(min >= c) min = c;

	// 上のif文を通過してきた値が 最小値 min になるためここで
	// 必ず一番小さい値が代入されていることになる
	cout << "最小値は" << min << "です。";

	return 0;
}
