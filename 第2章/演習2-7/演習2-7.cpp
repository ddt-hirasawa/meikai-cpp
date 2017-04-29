// 演習2-7 2つの実数を読み込み 大きいほうの値を表示する処理

#include<iostream>

using namespace std;

int main()
{
	int a,b;// 比較する変数の定義 両方キーボードから読み込むため 初期化はいらない

	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;

	// aとbが比較され 仮に a = 5 b = -1 ならば a が大きいと判断される
	if(a>=b) cout << "大きい値は" << a << "です。";
	//aとbが比較され 仮に a = 10 b = 100 ならば b が大きいと判断される
	else if(a<=b) cout << "大きい値は" << b << "です。";

	return 0;

}
