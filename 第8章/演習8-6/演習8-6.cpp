// 演習8-6 文字列に含まれる文字ｃが何個あるか返す関数の作成

#include<iostream>

using namespace std;

// 文字列 に 指定した文字がいくつ含まれているのか返す関数の宣言
int strch_cnt(const char*,char);

int main()
{
	char a[] = "afhaahfddfahdaha"; // a ６個 入っている 文字列の初期化　文字を増やしたり変えたりして確認

	// 'a'が含まれている個数を表示 引数は文字列だが返却されるのはint型になる
	cout << "文字列 a に 文字 a は " << strch_cnt(a,'a') << " 個含まれている。";

	return 0;
}

int strch_cnt(const char* s,char c)
{
	// 返却する変数を関数内部で作成1文字も含まれない場合for文を通過しても
	//インクリメントされず ０のままにナル
	int cnt = 0;
	// 文字列の先頭からナル文字まで操作するためループ
	//文字cと同じオブジェクトをポインタがさせばカウントする
	for(int i=0;*(s+i) != '\0';i++) if(*(s+i) == c) cnt++;

// カウントした値を返却
	return cnt;
}
