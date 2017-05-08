/*
 演習8-9 ヘッダcstring で定義されている strcpy strncpy と同等の関数を自作する

 作成日 2017年5月8日

 作成者 平澤敬介
 */

#include<iostream>// 入出力のヘッダ

using namespace std;
// 名前空間の指定

// 関数の宣言 文字列をコピー
char* my_strcpy(char*, const char*);

// 関数の宣言 長さを指定して文字列をコピー
char* my_strncpy(char*, const char*, int n);

int main() {
	char name[] = "HIRASAWA_KEISUKE";	// 文字列として自分の名前で初期化
	char name1[20];						// 関数 my_strcpy コピー用の配列
	char name2[20];						// 関数 my_strncpy コピー用の配列
	int n = 8;							// 長さ指定 苗字までの長さ

	// 自分の名前を表示する
	cout << "文字列 name = " << name << "\n";

	//文字列をそのまま name1にコピーする
	my_strcpy(name1, name);

	//文字列を 長さ n まで name2にコピーする
	my_strncpy(name2, name, n);

	//my_strcpy  でコピーした文字列を表示する
	cout << name1 << "\n";

	//my_strncpy でコピーした文字列を表示する
	cout << name2 << "\n";

	return 0;
}

//関数 文字列をそのままコピーする
//仮引数 コピー元 と コピーする配列の先頭を指すポインタをそれぞれ s1 s2
//返却値 コピーが行われた配列 s1

char* my_strcpy(char* s1, const char* s2) {
	// s2 の文字列でナル文字を検出するまで行う
	for (int i = 0; *s2; i++) {

		*s1++ = *s2++;	// s1 に s2 の文字を代入し s1 と s2 のポインタ をインクリメント
						//これで先頭から末尾まで漏れなくコピーできる
	}
	*s1 = '\0';		// コピーした文字列s1 の最後尾に ナル文字を代入
					// 文字列の最後にナル文字を置くことで文字列を区切る

	// 文字列を返却する
	return s1;
}

//関数 文字列を長さを指定してコピーする
//仮引数 コピー元 と コピーする配列の先頭を指すポインタをそれぞれ s1 s2 文字の長さを指定する値 n
//返却値 コピーが行われた配列 s1

char* my_strncpy(char* s1, const char* s2, int n) {

	// s2 の文字列で長さ nまでループを行う
	for (int i = 0; i < n; i++) {

		*s1++ = *s2++;		// s1 に s2 の文字を代入し s1 と s2 のポインタ をインクリメント
							//これで先頭から末尾まで漏れなくコピーできる

		// s2 の文字列で 指定された長さｎ の前にナル文字を検出した場合、ループから出でコピーを終了
		if (*s2 == '\0') {

			//コピーを終了します
			break;
		}
	}

	*s1 = '\0';		// コピーした文字列s1 の最後尾に ナル文字を代入
					// 文字列の最後にナル文字を置くことで文字列を区切る
	// 文字列を返却する
	return s1;
}
