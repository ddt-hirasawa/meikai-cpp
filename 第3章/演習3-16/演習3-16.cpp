/*
演習3-16 2乗値を表示するプログラム

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int nMax;// 最大値を指定する変数を定義 この数まで 2乗値を表示する

	//この値まで2乗値を表示します
	cout << "nMaxの値 :";

	//nMaxにキーボードからの値を代入する
	cin >> nMax;

	// 1 から ｎ まで 2乗値を表示するためにループに入る
	for(int i=1; i<= nMax; i++) {

		//1から順に2乗する値と2乗した値を表示していく
		cout << i << "の2乗は" << i*i << "\n";
	}

	return 0;
}
