
// 入出力のヘッダ
#include<iostream>

// 名前空間の指定
using namespace std;

// プログラム本文 始まり
int main()
{
	double x,y;// double型 変数 x y を定義 // 合計と平均を出すために使う

	// x の値を cout を使い 入力するようにコンソールに要求し
	// cin で代入する値を抽出する
	cout << "xの値 :";cin >> x;
	// y の値を cout を使い 入力するようにコンソールに要求し
	// cin で代入する値を抽出する
	cout << "yの値 :";cin >> y;

	// 2つの値のため 合計と平均を それぞれ
	//ストリーム上で演算し 表示される
	cout << "合計は" << x+y << "です。\n"
			<< "平均は" << (x+y)/2 << "です。";

	return 0;
}
