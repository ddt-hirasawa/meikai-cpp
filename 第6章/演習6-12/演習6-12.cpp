// 演習6-12 b 以上 a 以下の整数の和を返却する関数を製作する

#include<iostream>

using namespace std;

int sum(int a,int b = 1); // b以上 a以下の全整数の和を出力する関数の宣言

int main()
{
	int i,j;

	cout << "最小値 :";
	cin >> i;
	cout << "最大値 :";
	cin >> j;

	cout << i << " ～ " << j << "までの和は";
	// 関数呼び出し部分 1～10までで ５５を返却
	cout << sum(j,i) << " です。\n";
	// 関数呼び出し部分 ｊ＝１０で 55を返却
	cout << sum(j) << " です。\n";
	return 0;
}

// b以上 a以下の全整数の和を出力する関数
int sum(int a,int b)
{
	// 関数の内部で 変数を宣言個の変数を返却する
	int Sum = 0;
	// 最小値である bをインクリメントしながら加算していく
	for(;b <= a;b++) Sum += b;
	// 合計をmainに返却する部分 1から１０までで５５を返却
	return Sum;
}
