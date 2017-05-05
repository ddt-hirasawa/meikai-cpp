#include<iostream>// 入出力のヘッダ

using namespace std;// 名前空間の指定

int main()// プログラム本文始まり
{
	int a,b;// 変数の定義

	cout << "順に数を表示します。\n";// コンソールに表示

	cout << "整数a : ";					// コンソールに表示
	cin >> a;							// a の値を読み込む
	cout << "整数b : ";					// コンソールに表示
	cin >> b;							// a の値を読み込む

	if(a < b){ 						// a の方が b より大きい状態にする。
		int tmp = a;				// 	tmp を a で初期化
		a	= b;					// a に b を代入
		b	= tmp;					// b に tmp を代入
	}								// if文終了

	do{							// do文開始
		cout << b << " ";		// コンソールに表示
		b++;					// b をインクリメント
	}while(a != b);				// a == b になるまで繰り返す

	cout << a;					// コンソールに表示

	return 0;// プログラム終了
}// プログラム本文終わり
