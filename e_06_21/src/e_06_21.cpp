/*
演習6-21 同じ関数名を使いそれぞれの型で絶対値を返却する関数群を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数群を定義する それぞれの型で関数を作成する必要がある
// short型の絶対値を返却する関数の宣言
short absolute(short);
// int型の絶対値を返却する関数の宣言
int absolute(int);
// long型の絶対値を返却する関数の宣言
long absolute(long);
// float型の絶対値を返却する関数の宣言
float absolute(float);
// double型の絶対値を返却する関数の宣言
double absolute(double);
// long double型の絶対値を返却する関数の宣言
long double absolute(long double);

int main()
{

	short a;		//short型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる
	int b;			//int型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる
	long c;			//long型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる
	float d;		//float型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる
	double e;		//double型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる
	long double f;	//long double型で変数を定義する絶対値なので 負の値のとき符号が取り除かれる

	// 変数の値をキーボードから読み込み部分 絶対値なので正の値と負の値を入力し
	// 符号が取り除かれているか確認する

	// short型の入力部分
	cout << "short型 : ";

	// キーボードからの値を代入する部分
	cin >> a;

	// intt型の入力部分
	cout << "int型 : ";

	// キーボードからの値を代入する部分
	cin >> b;

	// long型の入力部分
	cout << "long型 : ";

	// キーボードからの値を代入する部分
	cin >> c;

	// float型の入力部分
	cout << "float型 : ";

	// キーボードからの値を代入する部分
	cin >> d;

	// double型の入力部分
	cout << "double型 : ";

	// キーボードからの値を代入する部分
	cin >> e;

	// long double型の入力部分
	cout << "long doule型 : ";

	// キーボードからの値を代入する部分
	cin >> f;

	// 単なる宣言 絶対値に変換した値をそれぞれ表示する
	cout << "絶対値\n";

	// 同じ関数名ではあるが それぞれの型にあった関数が呼び出されており
	// 引数の型で呼び出すとき判別されている
	cout << "short型 a = " << absolute(a) << "\nint型 b = " << absolute(b)
		<< "\nlong型 c = " << absolute(c) << "\nfloat型 d = " << absolute(d)
		<< "\ndouble型 e = " << absolute(e) << "\nlong double型 f = " << absolute(f);

	return 0;
}

// short型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
short absolute(short x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}

// int型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
int absolute(int x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}

// long型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
long absolute(long x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}

// float型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
float absolute(float x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}

// double型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
double absolute(double x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}

// long double型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
long double absolute(long double x)
{
	// 負の値のときのみ処理を行う
	if(x < 0) {

		// -1 をかけて正の値にする
		x *= -1;
	}
	return x;
}
