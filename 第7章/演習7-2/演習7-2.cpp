// 演習7-2 List6-15 関数swap を参照渡しから ポインタの値私により行うように変更

#include<iostream>

using namespace std;

// ポインタによる 値渡しの関数を宣言する
void swap(int*,int*);

int main()
{
	// 変数の宣言 値が交換できていることが確認できれば良いので
	// 同じ値以外なら特に決まりはない
	int i = 200;
	int j = 1000;

	// 交換前の表示 i = 200 j = 1000
	cout << "	交換前\n";
	cout << " i = " << i << " j = " << j <<  "\n";

	// 関数の呼び出し 引数はオブジェクトではなく変数のアドレスになる
	swap(&i,&j);

	// 交換前の表示 i = 1000 j = 200
	cout << "	交換後\n";
	cout << " i = " << i << " j = " << j <<  "\n";

	return 0;
}

// ポインタによる 値渡しの関数
void swap(int* a,int* b)
{
	// 引数がアドレスなので a b のアドレスを値渡しで
	// 交換することになる
	int tmp = *a;
	*a		= *b;
	*b		= tmp;
}
