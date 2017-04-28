#include<iostream>// 入出力のヘッダ

using namespace std;// 名前空間の指定

int main()// プログラム本文 始まり
{
	double x,y;// double型 変数 x y を定義

	cout << "xの値 :";
	cin >> x;
	cout << "yの値 :";
	cin >> y;

	cout << "合計は" << x+y << "です。\n"
			<< "平均は" << (x+y)/2 << "です。";

	return 0;
}
