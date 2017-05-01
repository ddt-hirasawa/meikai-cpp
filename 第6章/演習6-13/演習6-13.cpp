// 演習6-13 List6－14に a = yを追加して挙動を確認する 参照渡し

#include<iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int& a = x;// aはxを参照している

	cout << "a = " << a << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";

	a = 5;
	a = y; // a に yの値 2 を代入 参照先が変更されるわけではない
	x++; // a は x を参照しているので x がインクリメントされれば a もインクリメント
	y--; // y をデクリメント しても 参照先が変わっているわけでないので
			// y だけデクリメントされる。
	cout << "a = " << a << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";

	return 0;
}
