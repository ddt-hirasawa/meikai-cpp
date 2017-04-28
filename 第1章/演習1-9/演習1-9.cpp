#include<iostream>// 入出力のヘッダ

using namespace std; // 名前空間の指定

int main()//プログラム本文 始まり
{
	int n;//int型 n を定義

	cout << "整数値(整数) :"; // コンソールに出力
	cin >> n;// n の値をキーボードから読み込む

	cout << n << "と入力しましたね。"; // ｎの値を出力し、その後の文を出力

	return 0;// プログラム終了

}// プログラム本文 終わり
