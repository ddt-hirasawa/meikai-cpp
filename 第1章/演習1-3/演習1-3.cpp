/*
演習1-3 ; を削除した場合の動作はどうなるか確認すること

作成日 2017.5.4

作成者 平澤敬介
*/

// 入出力のヘッダ
#include<iostream>

 // 名前空間の指定
using namespace std;

 // プログラム本文　始まり　これ以降の文が順次実行される
int main()
{
	// ; 無しの場合
	// ; でその行の文を区切っているため  << "～ラム\n" cout <<
	// となっていまい構文エラーが発生してしまいます。
	cout << "C++プログラム\n"
	cout << ";無しの場合";

	return 0; // プログラム終了
} // プログラム本文 終わり
// 正常にコンパイルされません
