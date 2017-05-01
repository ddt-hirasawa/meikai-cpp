//演習7-1 List7-2 に&ptrの表示を追加したプログラムの作成

#include<iostream>

using namespace std;

int main()
{
	int n = 10; // ポイントのアドレスやオブジェクトを表示されるための変数を定義

	cout << "n 		: " << n << "\n";
	cout << "&n		: " << &n << "番地\n";

	int* ptr = &n;
	cout << "ptr		: " << ptr << "番地\n";
	cout << "*ptr	: " << *ptr << "\n";

	//変更点 &ptrの表示を追加
	cout << "&ptr	: " << &ptr << "番地\n";

	return 0;
}
// ポインタはn のアドレスを表示する ポインタも自分のアドレスを持っているが
// 自分のアドレスは変更されない
