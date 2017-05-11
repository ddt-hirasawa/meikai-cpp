/*
演習4-5 float型 double型 の値を表示し考察する

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

#include<iomanip>

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
	cout << "float型 x : " << setprecision(30) << x << "\ndouble型 y : " << setprecision(30) << y;

	cout << "\n";

	cout <<"float型 x : " <<  sizeof(x) << "\ndouble型 y : " << sizeof(y);
	return 0;
}
/*
float型 x : 12345.678901234

double型 y :12345.678901234

float型 x : 12345.6787109375

double型 y :12345.678901234

float型 x : 4
double型 y : 8

/*　float型 double型はともに小数点以下も扱っているが
float型は 小数点4位の値が入力した値と違うことがわかります。
対して、double型は 小数点4位以下も入力した値と同じ値を表示しています。
sizeof演算子で float型とdouble型の大きさを表示したところ
double型は float型の倍の大きさであることがわかりました。
double型の精度が良い理由は、メモリを64bit 持っているからです。
float型は メモリが32bitしかないので桁数が多い変数だと、記憶域で表現することが
できずに値が正確に表示できなくなってしまいます。
