/*
演習8-3 文字列中の大文字を小文字に変換したうえで表示する関数を作る

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>
 // 大文字小文字変換用の 関数が定義されているライブラリ
#include<cctype>

using namespace std;

//関数の宣言 配列を小文字にし表示する関数
void put_lower(const char a[]);

int main()
{
	const char a[] = "ABcDeFGHIjkL";		//	大文字と小文字で不規則に初期化します

	//関数通過前の文字列を表示して、比べます
	cout << "a = " << a << "\n";

	//宣言 大文字を小文字にしました
	cout << "大文字を小文字に変換\n";

	//関数呼び出し部分 関数内で変換して表示する
	put_lower(a);

	return 0;
}

//関数 配列を小文字にし表示する
//仮引数 文字列を指しているポインタ a
//返却値 無し

void put_lower(const char a[])
{
	// 表記 a の文字列
	cout << "a = ";

	//for文の制御式で a[i] と記述すれば文字列のナル文字までループ処理を
	// 行います
	// 訂正 再確認しました。for文の制御式で a[i] の条件だと
	// a[i] = ０ ->  false となれば、ループを終了します
	for(int i=0; a[i]; i++) {
		// 配列の要素を静的キャストでchar型に変換し表示を行う
		//キャスト変換を行わないと関数を通過した後数字の羅列になってしまうため
		//キャスト変換で char 型に戻す必要がある
		cout << static_cast<char>(tolower(a[i]));
	}
}
