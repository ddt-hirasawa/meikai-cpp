/*
演習5-2 double型で要素数5の 配列をすべて0.0で初期化する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	double dTest[5] = {0.0,0.0,0.0,0.0,0.0};// {0} ですべての要素を0.0で初期化できることを忘れずに

	//要素数分表示していくためのループ処理を行います
	for(int i=0; i < 5; i++) {

		// 初期化されているか確認するため、配列の値を表示します
		cout << "dTest[" << i << "] = " << dTest[i] << "\n";
	}
	return 0;
}
