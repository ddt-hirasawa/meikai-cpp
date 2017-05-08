/*
演習7-5 List7-10 の関数reverceを関数swap を呼び出すことによって再現すること

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//関数の宣言 配列を反転する関数
void reverse(int a[],int n);

//関数の宣言 要素を入れ替える関数
void swap(int*,int*);

int main()
{
	const int max = 5;	//配列の要素数を定義します const を付けているので変更できません
	int Int[max];			//配列を定義します 関数で動作を確認するためです


	// 配列に値を代入するため要素数分繰り返し処理を行います
	for(int i=0; i < max; i++) {

		//どの配列の要素に代入するのか見えるようにします
		cout << "Int[" << i << "] : ";

		// キーボードからの値で要素の値が決まります
		cin >> Int[i];
	}

	// 関数の呼び出し部分 並びを逆順にします
	reverse(Int,max);

	// 宣言 何をしたのかわかるようにします
	cout << "要素の並びを反転しました。\n";


	// 配列の要素を表示するためループします
	for(int i=0; i < max; i++) {

		// 配列の要素を見やすくします
		cout << "Int[" << i << "] = " << Int[i] << "\n";
	}

	return 0;
}

void reverse(int a[],int n)
{
	// 変更点 はじめと終わりを交換していくため要素数の半分の
	//回数でループ処理を行っていく
	for(int i=0;i < n/2;i++)
	//変更点 ポインタの指す位置を 変数iによって操作している
		// 要素のはじめと終わりを交換し続けていく
		swap(*(a+i),*(a+n-i-1));
}

void swap(int* a,int* b)
{
	int tmp = *a;
	*a		= *b;
	*b		= tmp;
}
