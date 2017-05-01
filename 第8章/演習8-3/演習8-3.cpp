// 演習8-3 文字列中の大文字を小文字に変換したうえで表示する関数を作る

#include<iostream>
 // 大文字小文字変換用の 関数が定義されているライブラリ
#include<cctype>

using namespace std;

void put_lower(const char a[]);

int main()
{
	const char a[] = "ABcDeFGHIjkL";

	cout << "a = " << a << "\n";

	cout << "大文字を小文字に変換\n";

	put_lower(a);

	return 0;
}

// 配列を小文字にし表示する関数
void put_lower(const char a[])
{
	cout << "a = ";
	//for文の制御式で a[i] と記述すれば文字列のナル文字までループ処理を
	// 行います
	for(int i=0;a[i];i++)
		// 配列の要素を静的キャストでchar型に変換し表示を行う
		//キャスト変換を行わないと関数を通過した後数字の羅列になってしまうため
		//キャスト変換で char 型に戻す必要がある
		cout << static_cast<char>(tolower(a[i]));
}
