//演習8-14 文字列の並びを反転する関数を作成する

#include<iostream>
// 文字列に関する処理が含まれているライブラリ
#include<cstring>

using namespace std;

	// 文字列を反転させる処理を行う関数の宣言
char* str_rvs(char*);

int main()
{
	char name[] = "HIRASAWA_KEISUKE"; 		// 文字列の自分の名前で初期化する

		// 反転処理前の文字列を表示しコンソールで比較する
	cout << "文字列name " << name << "\n";

	//	反転する処理を行う宣言をしている
	cout << "反転後\n";

	// 関数を呼び出し反転されていることを確認する
	cout << "文字列name " << str_rvs(name) << "\n";

	return 0;
}

	// 			文字列を反転させる処理を行う関数
char* str_rvs(char* name)
{
	int len = strlen(name);	// 変数len をnameの文字列の要素数で初期化する

	// 先頭と最後尾を1文字ずつ交換していくためループ処理の回数は文字列の要素数の半分となる
	for(int i=0;i < len/2;i++){
		//ループ内で変数を定義し先頭の文字で初期化する swapするために
		char tmp = *(name+i);
		//全要素ではナル文字も含まれるため最後尾の文字へのポインタは
		//*(name+len-1) でアクセスできる
		*(name+i) = *(name+len-1-i);
		*(name+len-1-i) = tmp;
	}
	////反転した文字列を返却する
	return name;
}
