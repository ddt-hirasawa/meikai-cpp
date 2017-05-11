/*
演習 4-9 整数値を様々な型で読み込み 平均をキャスト記法 関数的記法 static_cast を使ってそれぞれ表示する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int nTest1 = 50; // int + int をdouble に変換するために変数を定義する
	int nTest2 = 49; // double 型に変換されたときの値を比べる

						// キャスト記法   (型)(演算)
	cout << "キャスト記法 : " << (double)(nTest1+nTest2)/2 << "\n"
						// 関数的記法     型（演算）
		<< "関数的記法 : " << double((nTest1+nTest2) / 2) << "\n"
						// static_cast	static_cast<型>(演算)
		<< "static_cast : " << static_cast<double>((nTest1+nTest2) / 2);

	return 0;
}
/*			実行結果
 * キャスト記法 : 49.5
	関数的記法 : 49
	static_cast : 49
 *
 * 実行結果によって、正常に変換できているのは キャスト記法だけだとわかる
 *
 * 理由は、型変換と演算が行われる順番で 関数的記法 も static_cast も
 * 演算した後に型変換を行っているため 型変換を行う前に int 型の 49 になってしまっている
 *キャスト記法は 、演算が行われる前に変数が double型に 変更されるため 実行結果は 49.5 になる
 *
 */
