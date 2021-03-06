/*
 演習7-17 ポインタp が 指すオブジェクトの先頭nバイトにvを代入する関数を作成せよ

 作成日 2017年5月8日

 作成者 平澤敬介
 */

#include<iostream>

using namespace std;

//関数の宣言 ポインタが指すオブジェクトの先頭nバイトにvを代入する
void mem_set(void* p, const int n, unsigned char v);

int main() {

	const int n = 5;		//	配列の要素数
	short obj[n] = { 0 };		//	short型の配列 要素は n

	unsigned char v = 1;	// 文字のデータ範囲は 0 ～ 255

	//配列の初期化された要素を表示させます
	for (int i = 0; i < n; i++) {

		//各要素を改行して表示する ただし すべて 0
		cout << obj[i] << "\n";
	}

	// 関数呼び出し部分
	mem_set(obj, n, v);

	// 区切ります
	cout << "関数通過後" << "\n";

	//関数後の配列を表示させます
	for (int i = 0; i < n; i++) {

		//各要素を改行して表示する ただし すべて 0
		cout << obj[i] << "\n";
	}
	return 0;
}

//関数 ポインタが指すオブジェクトの先頭nバイトにvを代入する
//仮引数 空ポインタ p 要素数 n 与える文字 v
//返却値 なし

void mem_set(void* p, const int n, unsigned char v) {

	unsigned char* tmp = reinterpret_cast<unsigned char*>(p);	// 空ポインタを 強制キャストでunsigned char型に変換します

	//要素数分 v を代入するため ループします
	for (int i = 0; i < n; i++) {

		//文字を指すポインタ  に 文字 v を代入する
		*tmp++ = v;
	}
}
/*空ポインタを強制キャストで文字を指すポインタに変換して、
 * そのポインタに v を代入していきます
 * 完全に理解し切れていないので勉強します
 *
 */
