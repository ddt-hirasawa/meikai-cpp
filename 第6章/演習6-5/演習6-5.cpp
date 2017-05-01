#include<iostream>

using namespace std;

int sumup(int);/// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	int i;

	cout << "整数 i :";
	cin >> i;

	// 関数呼び出し部分 main内で定義されている i までの整数の和を返却する
	cout << " 1 ～ " << i << " までの和は " << sumup(i)
			<< " です。";

	return 0;
}

// 関数 1からn までの整数を加算した値を返却する
int sumup(int n)
{
	//関数ないで合計を返却する変数を定義 初期化も行う
	int sum = 0;
	for(int i=1;i <= n;i++)
		sum += i;
	// for文を通過した値が return 二より mainに返却される
	return sum;
}
