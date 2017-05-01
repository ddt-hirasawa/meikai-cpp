// 演習7-3 List6-16 関数sortを参照渡しからポインタを使った関数に変更

#include<iostream>

using namespace std;

// 関数の宣言部分 中身は main文の後に記述
void sort(int*,int*,int*);
void swap(int*,int*);

int main()
{
	int x,y,z;// 変数の定義 整数値ならば 特にルールはない

	// 整数値を読み込む部分 と 表示する部分
	cout << "整数を3個入力 : "; cin >> x >> y >> z;
	cout << "	並び替え前\n"
		<< x << " " << y << " " << z << "\n";

	// 関数の呼び出し部分 引数として変数のアドレスを渡している
	sort(&x,&y,&z);

	cout << "	並び替え後\n"
		<< x << " " << y << " " << z << "\n";

	return 0;
}

// 3つの整数を昇順に並べ替える関数
void sort(int* a,int* b,int* c)
{
	//関数内部でsawp関数を呼び出している
	//if文の条件では ＊が付くことにより
	//アドレスからそのオブジェクトを見ることになっているため
	//アドレスではなく値そのものを比較している
	if(*a < *b) swap(a,b);
	if(*b < *c) swap(b,c);
	if(*a < *b) swap(a,b);
}

// 2つの整数を並べ替える関数
void swap(int* a,int* b)
{
	// 引数がアドレスなので a b のアドレスを値渡しで
	// 交換することになる
	int tmp = *a;
	*a		= *b;
	*b		= tmp;
}
