// 演習8-5 文字列の全文字を1行に1文字ずつ改行しながら表示を行う関数を作成する

#include<iostream>

using namespace std;

// 文字列を１文字ずつ改行して表示する関数の宣言
void putv(const char*);

int main()
{

	char m[] = "HIRASAWA";// 文字列の定義と初期化 自分の苗字で初期化

	cout << "文字列 m : " << m << "\n";

	// 関数の呼び出し 引数は文字列 m だけで十分
	putv(m);

	return 0;
}

void putv(const char* a)
{
	//文字の先頭からナル文字まで表示を行うためループ処理を行う
	for(int i=0;*(a+i) != '\0';i++) cout << *(a+i) << "\n";
}
