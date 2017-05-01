// 演習5-2 double型で要素数5の 配列をすべて0.0で初期化する

#include<iostream>

using namespace std;

int main()
{
	double a[5] = {0.0,0.0,0.0,0.0,0.0};// {0} ですべての要素を0.0で初期化できることを忘れずに

	//要素数分表示していくためのループ処理を行います
	for(int i=0;i<5;i++) cout << "a[" << i << "] = " << a[i] << "\n";
	return 0;
}
