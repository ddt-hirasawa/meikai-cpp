// 演習 2-8 2つの実数を読み込み 差を表示する処理 必ず正の値 か 0 になる

#include<iostream>

using namespace std;

int main()
{
	//
	int a,b;// 比較する変数の定義 両方キーボードから読み込むため 初期化はいらない

	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数a :";cin >> a;
	cout << "整数b :";cin >> b;

	// 仮に a = 5 b = 4 ならば 最初のif文を通過し その差 1 を表示する
	if(a>=b) cout << "差は" << a-b << "です。";
	// 仮に a = 4 b = 6 ならば 次のの else if文を通過し その差 2 を表示する
	else if(a<=b) cout << "差は" << b-a << "です。";

	return 0;
}
