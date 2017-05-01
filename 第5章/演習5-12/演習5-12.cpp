// 演習5-12 3次元配列の要素数を求めるプログラム

#include<iostream>

// typeid演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

int main()
{
	int a[2][3][4];// typeid演算子を使うため3次元配列を定義する

	cout << "3次元配列の要素数を求めます。\n";

	cout << "a[";
	//配列全体 を構成要素の大きさで割った数になる 要素は 2
	cout << sizeof(a) / sizeof(a[0]) << "][";
	//配列の要素の大きさを 構成要素の大きさで割った値になる 要素は 3
	cout << sizeof(a[0]) / sizeof(a[0][0]) << "][";
	//配列の 構成要素の大きさ を 構成要素の中にある要素の大きさで割った値になる 要素は 4
	cout << sizeof(a[0][0])/sizeof(a[0][0][0]) << "]\n";
	cout << "出力されました。\n";
	return 0;
}
