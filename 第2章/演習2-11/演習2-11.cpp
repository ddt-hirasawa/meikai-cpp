// 演習2-11 3つの値のキーボードから読み込み,中央値を表示する処理

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,ave;// 入力に使う変数と 中央値に使う変数を定義 すべて後で代入されるため
	// 初期化はしなくてよい

	// 変数 a,b,c の値をキーボードから読み込む部分
	//値の範囲はないので整数であれば どの値でも可能
	cout << "整数を入力してください。\n" << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;
	cout << "整数c :"; cin >> c;

	// ここで中央値を代入 a,b,c どれでもよいが 中央値をaと仮定する
	ave = a;

	//中央値 ave = a が成立しないのは 4パターン + 例外 1ある。
	// 成立しない 部分を更新していく処理
	// それぞれ
	// ave <= b <= c のとき
	if(ave <= b && b <= c) ave = b;
	//例外 1 ave == c != b のとき  2つの等しいとき例外として 値が異なる b を　 中央値にする
	else if(ave == c && c != b) ave = b;
	// ave <= b <= c のとき
	else if(ave <= c && c <= b) ave = c;
	// c <= b <= ave のとき
	else if(ave >= b && b >= c) ave = b;
	// b <= c <= ave のとき
	else if(ave >= c && c >= b) ave = c;

	// if文を通過してきた ave は中央値を必ず代入されていることになる
	cout << "中央値は" << ave << "です。";

	return 0;

}
