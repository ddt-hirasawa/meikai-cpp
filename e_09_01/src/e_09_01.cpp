/*
演習9-1 再帰呼び出しを使わずに、階乗を返却する関数を作成せよ

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//関数の宣言 階乗を返却します
int factorical(int num);

int main()
{
	int nTest;		//階乗を出すために、整数をキーボードからの値で決めます

	//階乗を関数で出すために整数が必要です
	cout	<< "整数 : ";

	//キーボードからの値で階乗する値を決めます
	cin >> nTest;

	//階乗は 1 ～ nTest までの全整数の積です。
	cout <<	nTest << " の階乗は "	<<	factorical(nTest)	<< "です。";

	return 0;
}

//関数 再帰呼び出しを行わずに階乗を返却する関数
//仮引数 階乗値を出すにあたっての整数の上限値 num
//返却値 1 ～ numまでの全整数を積算した値

int factorical(int num)
{
	int product = 1;	//	階乗を出すために、積算を行います。そのため、0 はNG

	//階乗を出すために、1からnumまでの整数をすべて積算します
	for(int i=1; i <= num; i++) {

		//ループごとに積算する値がインクリメントされていき、階乗を出します
		product *= i;
	}
	//for文を抜ければ、1～nTestまでの階乗値となります
	return product;
}
