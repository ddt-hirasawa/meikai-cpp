// 演習4-7 浮動小数点型 の情報をtypid演算子で表示する

#include<iostream>

//typid演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

int main()
{
	// typeid演算子によって浮動小数点型の情報を表示
	// そのため、それぞれの変数を定義する
	float a;
	double b;
	long double c;

	// typeid演算子で変数の持つ情報が表示されていく
	cout << "float型の情報 : " << typeid(a).name()
		<< "\ndouble型の情報 : " << typeid(b).name()
		<< "\nlong double型の情報 : " << typeid(c).name();
	return 0;
}
/*
 * float型の情報 : f
double型の情報 : d
long double型の情報 : e
 */
