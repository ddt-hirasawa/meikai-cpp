/*
演習8-5 文字列の全文字を1行に1文字ずつ改行しながら表示を行う関数を作成する

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 文字列を１文字ずつ改行して表示する関数の宣言
void putv(const char*);

int main()
{

	char name[] = "HIRASAWA";		// 文字列の定義と初期化 自分の苗字で初期化

	//苗字を横並びにします
	cout << "文字列 name : " << name << "\n";

	//関数の呼び出し 引数は文字列 name だけで十分
	putv(name);

	return 0;
}

void putv(const char* a)
{
	//訂正 for文の制御式を変更しました
	//文字の先頭からナル文字まで表示を行うためループ処理を行う
	for(int i=0; a[i]; i++) {

		//先頭から1文字表示しては改行していく
		cout << *(a+i) << "\n";
	}
}
