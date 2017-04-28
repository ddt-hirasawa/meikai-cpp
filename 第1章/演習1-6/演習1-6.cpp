#include<iostream> // 入出力のヘッダ

using namespace std;// 名前空間の指定

int main()//プログラム本文始まり
{
	int x;// int型 変数 x を定義
	int y;// int型 変数 y を定義

	x = 10.5; //　小数点は切り捨て
	y = 33; // 整数

	cout << x << "\n" << y; //コンソールにｘを表示した後ｙを表示

	return 0;// プログラム終了

}//プログラム本文 終わり
