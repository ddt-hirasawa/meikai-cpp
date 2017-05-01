// 演習6-4 半径 r の円の面積を返却する関数を作成する

#include<iostream>

#define pai 3.14 // 円周率

using namespace std;

double circ_area(double);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	int r;
	cout << "円の面積を求めます。\n"
			<< "半径 r :";
	cin >> r;

	cout << "半径 " << r << " の面積は "
			// 関数呼び出し部分 返却する値は変数に代入しなければならないという
			// 決まりはない
			<< circ_area(r) << "です。";

	return 0;
}

// 円の面積を返却する関数
double circ_area(double r)
{
	// #defineにより円周率が定義されているため 半径＊半径＊π で円の面積が返却される
	return pai * r * r;
}
