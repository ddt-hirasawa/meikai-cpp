// 演習 4-8 sizeof演算子 typeid演算子を使い演算の値を表示していく

#include<iostream>

//typid演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

int main()
{
	int a,b;
	double c,d;

	cout << "sizeof演算子を使用\n";
	cout << "int + int = " << sizeof(a+b);
	cout << "\ndouble + double = " << sizeof(c+d);
	cout << "\nint + double = " << sizeof(a+c);
	cout << "\ndouble + int = " << sizeof(d+b);

	cout << "\n";

	cout << "typeid演算子を使用\n";
	cout << "int + int = " << typeid(a+b).name();
	cout << "\ndouble + double = " << typeid(c+d).name();
	cout << "\nint + double = " << typeid(a+c).name();
	cout << "\ndouble + int = " << typeid(d+a).name();

	return 0;
}
/*	考察
 * 実行結果から int型同士,double型同士の演算では メモリは4bit ,8bitのままで
 typeid演算子の結果からも 型は変わっていないことがわかる。
 ただし、異なる方 int double の演算になると int型の変数がメモリの大きい型に変更され
 演算されてしまう。sizeof演算子の結果から 演算後は 4bit から 8bit にメモリが増え
 typeid演算子から 型が i から ｄに変更されていることがわかる

/*実行結果
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
