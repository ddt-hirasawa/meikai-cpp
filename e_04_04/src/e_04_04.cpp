/*
演習4-4 文字リテラルと整数リテラルにsizeof演算子を使い結果を考察する

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{

	int  c = 10000;		// 整数リテラル
	short d = 1;			// 整数リテラル
	long e = 1;			// 整数リテラル
	char x = 'A'; 			// 文字リテラル

			//整数リテラル のメモリ
	cout << "整数リテラル(short) : "<< sizeof(d) << "\n"

			//整数リテラル のメモリ
			<< "整数リテラル(int) : "<< sizeof(c) << "\n"

			//整数リテラル のメモリ
			<< "整数リテラル(long) : "<< sizeof(e) << "\n"

			// 文字リテラルのメモリ
			<< "文字リテラル(char) : " << sizeof(x);

	return 0;
}

//sizeof演算を使い出した値hは、実行環境で文字を表示するのに
//必要な大きさの何倍かを表しています。
// そのため、実行結果から
// 文字リテラルは、8ビットメモリを使い
// 整数リテラル(short) は 16ビットメモリを使い
//	整数リテラル(int) は 32ビットメモリを使い
//	整数リテラル(long) は 32ビットメモリを使うことになります
//