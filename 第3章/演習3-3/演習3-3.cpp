// 演習3-3 2つの値を入力し その間の整数を小さいほうからすべて表示していく

#include<iostream>

using namespace std;

int main()
{
	int a,b;// 変数の定義 値を後で代入するため 初期化は不要

	// 2つの値を、入力する部分 整数であれば制限はないため
	// どちらが大きくてもかまわない
	cout << "整数a : "; cin >> a;
	cout << "整数b : "; cin >> b;

	// 単なる宣言 表示していく数を表示する宣言
	cout << "順に数を表示します。\n";

	//  a b どちらが大きくてもかまわない理由
	// このぶぶんで  a b の値を入れ替え必ず aのほうが大きい状態にする
	if(a < b){
		int tmp = a;
		a	= b;
		b	= tmp;
	}
	//

	// 小さいほうから順に表示していくためループに入る
	do{
		// 小さい値 b を表示して インクリメントしていく
		cout << b << " "; b++;
		// a と b が異なる場合ループする
		// ただし、表示した後,インクリメントされているので
		// ループから出るときは b = a - 1 までしか表示されない
	}while(a != b);

	// 不足分の 最大値を表示する
	cout << a;

	return 0;
}
