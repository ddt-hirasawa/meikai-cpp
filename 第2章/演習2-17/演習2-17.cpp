// 演習2-17 double a; int b; a = b = 1.5 のときの値の移り変わりを説明せよ

#include<iostream>

using namespace std;

int main()
{
	double a;// 変数の定義  浮動小数点型
	int b;		// 変数の定義 整数型

	// b を 1.5 で初期化し,a を b の値で初期化する
	a = b = 1.5;

	// コンソールに表示 a = 1 b = 1 と表示  説明部分 -> ＊１
	cout << "double型 a : " << a << "\nint型 b :" << b;

	return 0;
}

/*					＊１					*/
// 変数b に　1.5が代入されますが int型であるため
// 小数点以下が切り捨てられ b = 1　で初期化されます。
// 変数a は　double型ですが　a = b = 1 となっているため、
// a = 1　で初期化されます。
