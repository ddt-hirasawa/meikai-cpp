// 演習3-16 2乗値を表示するプログラム

#include<iostream>

using namespace std;

int main()
{
	int n;// 最大値を指定する変数を定義 この数まで 2乗値を表示する
	cout << "nの値 :"; cin >> n;

	// 1 から ｎ まで 2乗値を表示するためにループに入る
	for(int i=1;i<=n;i++)
		cout << i << "の2乗は" << i*i << "\n";

	return 0;
}
