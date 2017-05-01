// 演習6-2 3つの整数値から、その最小値を返却する関数を作成する

#include<iostream>

using namespace std;

int min(int,int,int);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	cout << "最小値を返却します。\n";

	int a[3];

	// 配列に3個整数を格納するためループ処理を行う
	for(int i=0;i<3;i++){
		cout << "a[" << i << "] :";
		cin >> a[i];
	}

	// 関数を呼び出す部分 変数 m に最小値を代入する
	int m = min(a[0],a[1],a[2]);

	cout << "最小値 :" << m << "です。";

	return 0;
}

// 最小値を返却する関数 a b c の中での最小値をreturunにより返却する
int min(int a,int b,int c)
{
	int m = a;
	if(m > b) m = b;
	if(m > c) m = c;

	return m;
}
