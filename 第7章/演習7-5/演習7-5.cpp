//演習7-5 List7-10 の関数reverceを関数swap を呼び出すことによって再現すること

#include<iostream>

using namespace std;

void reverse(int a[],int n);
void swap(int*,int*);

int main()
{
	const int n = 5;
	int c[n];

	for(int i=0;i < n;i++){
		cout << "c[" << i << "] : ";
		cin >> c[i];
	}

	reverse(c,n);

	cout << "要素の並びを反転しました。\n";

;
	for(int i=0;i < n;i++)
		cout << "c[" << i << "] = " << c[i] << "\n";

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
