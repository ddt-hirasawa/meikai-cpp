//演習4-5 float型 double型 の値を表示し考察する

#include<iostream>

using namespace std;

int main()
{
	float x;			// float型の定義
	double y;			// double型の定義


	// float型の値を読み込む
	cout << "float型 x : "; cin >> x;

	// double型の値をを読み込む
	cout << "double型 y : "; cin >> y;

	// float型 double型の値を比較する キーボードから入力した値は
	// 桁が多くなるにつて値が多少変わってくる
	cout << "float型 x : " << x << "\ndouble型 y : " << y;
	return 0;
}

 /* 1回目
float型 x : 123456789
double型 y : 123456789
float型 x : 1.23457e+008
double型 y : 1.23457e+008
 */
/* ２回目

 float型 x : 1.32425234253252
double型 y : 1.12134523523523532523
float型 x : 1.32425
double型 y : 1.12135
*/
/*　float型 double型はともに小数点以下も扱っているが
 * 精度としては６桁が限度である。６桁目以降は四捨五入し
 * 	表示され、桁数は e +桁数で表示される。
 */
