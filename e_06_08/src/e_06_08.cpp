/*
演習6-8 List6-8を書き換え 関数 put_stars を 関数内部で put_nchar を呼び出すことによって表示を行うように変更する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要
void put_stars(int);
// 関数の宣言 main文の後で関数文を書くために必要
void put_nchar(int,char);

int main()
{
	int nInt;	// 変数の定義 代入されるで段数が決まる

	// 宣言 これから三角形を表示します
	cout << "左下直角三角形を表示します。\n";

	// 三角形の段数を決めます
	cout << "段数は :";

	// キーボードからので段数が決まります
	cin >> nInt;

	// 1からnまでの段数を表示を行うためにループを行う
	for(int i=1; i <= nInt; i++) {

		//関数呼び出し部分 main内呼び出し側の変更はしない
		put_stars(i);

		// 改行して、次の段に向かう
		cout << "\n";
	}
	return 0;
}

//関数 変更点 n回 関数を呼び出すように変更している
//仮引数 n 表示する回数を決めます
//返却値なし

void put_stars(int n)
{
	// 関数の呼び出し部分 回数と表示する文字を与える
	put_nchar(n,'*');
}

//関数 変更点 文字の指定を、関数の呼び出し側で行うように変更している
//仮引数 int n は表示する回数を決めます char c は表示する文字を決めます
//返却値無し

void put_nchar(int n,char c)
{
	// デクリメントし、n が0になるまで処理を行う
	while(n-- > 0) {

		// ｃに代入されている文字を表示する
		cout << c;
	}
}
