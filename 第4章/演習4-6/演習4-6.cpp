//演習4-6 浮動小数点型の大きさを表示する
// float double long double が該当する

#include<iostream>

// sizeof演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

int main()
{
	// sizeof演算子によって浮動小数点型の大きさを表示
	// そのため各変数を初期化せず定義する
	float a;
	double b;
	long double c;

	// sizeof演算子で それぞれの 扱うメモリが表示される
	cout << "float型の大きさ : " << sizeof(a) << "\ndouble型の大きさ : " << sizeof(b)
		<< "\nlong double型の大きさ : " << sizeof(c);
	return 0;
}
// 実行結果
/*float型の大きさ : 4
double型の大きさ : 8
long double型の大きさ : 16
 *
 */
