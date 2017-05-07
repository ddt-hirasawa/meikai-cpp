/*
演習 4-8 sizeof演算子 typeid演算子を使い演算の値を表示していく

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

//typid演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

int main()
{
	int aInt,bInt;			//
	double cDouble,dDouble;	//

	cout << "sizeof演算子を使用\n";

	// int 同士の演算の場合の記憶域の大きさ
	cout << "int + int = " << sizeof(aInt+bInt);

	// double 同士の演算の場合の記憶域の大きさ
	cout << "\ndouble + double = " << sizeof(cDouble+dDouble);

	// int doubleの演算の場合の記憶域の大きさ
	cout << "\nint + double = " << sizeof(aInt+cDouble);

	// double intの演算の場合の記憶域の大きさ
	cout << "\ndouble + int = " << sizeof(dDouble+bInt);

	cout << "\n";

	cout << "typeid演算子を使用\n";

	// int 同士の演算の場合の型の変化
	cout << "int + int = " << typeid(aInt+bInt).name();

	// double 同士の演算の場合の型の変化
	cout << "\ndouble + double = " << typeid(cDouble+dDouble).name();

	// int doubleの演算の場合の型の変化
	cout << "\nint + double = " << typeid(aInt+cDouble).name();

	// double intの演算の場合の型の変化
	cout << "\ndouble + int = " << typeid(dDouble+aInt).name();

	return 0;
}
/*	考察
 * 実行結果から int型同士,double型同士の演算では メモリは4bit ,8bitのままで
 typeid演算子の結果からも 型は変わっていないことがわかる。
 ただし、異なる方 int double の演算になると int型の変数がメモリの大きい型に変更され
 演算されてしまう。sizeof演算子の結果から 演算後は 4bit から 8bit にメモリが増え
 typeid演算子から 型が i から ｄに変更されていることがわかる

実行結果
 sizeof演算子を使用
int + int = 4
double + double = 8
int + double = 8
double + int = 8

typeid演算子を使用
int + int = i
double + double = d
int + double = d
double + int = d
 *
 *
 */
