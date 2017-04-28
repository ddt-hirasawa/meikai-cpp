#include<iostream>// 入出力のヘッダ

using namespace std;// 名前空間の指定

int main()// プログラム本文始まり
{
	double hen,takasa;// double型 hen takasa を定義

	cout << "三角形の面積を求めます。\n";//コンソールに表示
	cout << "底辺 : ";//				  コンソールに表示
	cin >> hen;							//henの値を読み込む
	cout << "高さ : ";					//コンソールに表示
	cin >> takasa;						//takasaの値を読み込む

	double menseki = (hen*takasa)/2; // double型 menseki を式の値で初期化

	cout << "面積は" << menseki << "です。"; // 三角形の面積を表示

	return 0;// プログラム終了

}// プログラム本文終わり
