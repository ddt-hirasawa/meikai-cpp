// 演習6-21 同じ関数名を使いそれぞれの型で絶対値を返却する関数群を作成する

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
	cout << "short型 : ";cin >> a;
	cout << "int型 : ";cin >> b;
	cout << "long型 : ";cin >> c;
	cout << "float型 : ";cin >> d;
	cout << "double型 : ";cin >> e;
	cout << "long doule型 : ";cin >> f;

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
	if(x < 0)
		x *= -1;
	return x;
}

// int型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
int absolute(int x)
{
	if(x < 0)
		x = -1 * x;
	return x;
}

// long型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
long absolute(long x)
{
	if(x < 0)
		x = -1 * x;
	return x;
}

// float型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
float absolute(float x)
{
	if(x < 0)
		x = -1 * x;
	return x;
}

// double型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
double absolute(double x)
{
	if(x < 0)
		x = -1 * x;
	return x;
}

// long double型 絶対値を返却する関数 ほかの関数でも同様の処理を行う
long double absolute(long double x)
{
	if(x < 0)
		x = -1 * x;
	return x;
}
