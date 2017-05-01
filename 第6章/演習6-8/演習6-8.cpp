// 演習6-8 List6-8を書き換え 関数 put_stars を 関数内部で put_nchar を呼び出す
// ことによって表示を行うように変更する

#include<iostream>

using namespace std;

void put_stars(int);// 関数の宣言 main文の後で関数文を書くために必要
void put_nchar(int,char);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	int n;

	cout << "左下直角三角形を表示します。\n";
	cout << "段数は :";
	cin >> n;

	// 1からnまでの段数を表示を行うためにループを行う
	for(int i=1;i<=n;i++){
		//関数呼び出し部分 main内呼び出し側の変更はしない
		put_stars(i);
		cout << "\n";
	}
	return 0;
}

// 変更点 n回 関数を呼び出すように変更している
void put_stars(int n)
{
	put_nchar(n,'*');
}

// 変更点 文字の指定を、関数の呼び出し側で行うように変更している
void put_nchar(int n,char c)
{
	while(n-- > 0)
		cout << c;
}
