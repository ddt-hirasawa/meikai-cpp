/*
演習8-8 文字列を逆順に表示する関数を作成する

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>
//文字列を処理するためライブラリ
#include<cstring>

using namespace std;

// 関数の宣言 文字列を逆順に表示する
void put_rev(const char*);

int main()
{
	char name[] = "HIRASAWA_KEISUKE";// 文字列を自分の名前で初期化

	// 文字列として自分の名前を表示
	cout << "文字列 name = " << name << "\n";

// 逆順に表示する宣言
	cout << "逆順に表示    ";

// 関数を呼び出し 逆順に表示する
	put_rev(name);

	return 0;
}

//関数 文字列を逆順に表示する
//仮引数 文字列の先頭を指しているポインタ a
//返却値 無し

void put_rev(const char* a)
{

	int len = strlen(a);	// 文字列の長さを返却する関数strlenを使い要素数を出す
							// 出した要素数から iをデクリメントしながらポインタを走査/し 逆順から文字を表示していく

	//文字列の最後尾から先頭まで表示していく
	for(int i=len;i >= 0;i--) {

		//ポインタの指すオブジェクトを表示する
		cout << *(a+i);
	}
}
