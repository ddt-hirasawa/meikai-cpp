/*
演習9-4 2値の最小値を返却するテンプレート関数を製作せよ

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//関数テンプレート
//値を比較して小さい値を返却する関数の宣言
template <class type>
type min_of(type,type);

int main() // main文の始まり
{
	int aInt = 1000;			//int int
	int bInt = 2100;			//int double
	double cDou = 999.99;		//double double それぞれで正常に動作するか
	double dDou = 2000;			//確認すること

	//比較する値をすべてコンソールに表示し正常に動作しているのか確認する
	cout << "aInt : " << aInt << "\n"
			<< "bInt : " << bInt << "\n"
			<< "cDou : " << cDou << "\n"
			<< "dDou : " << dDou << "\n";

									//iint intの場合
	cout << "a と b とで小さい値は " << min_of(aInt,bInt) << "です。\n"

									//int double の場合	int 型はdouble型に変換する
		<< "a と c とで小さい値は " << min_of(double(aInt),cDou) << "です。\n"

									//double double の場合 で小さい値を返す
		<< "c と d とで小さい値は " << min_of(cDou,dDou) << "です。\n";

	return 0;
}

//関数テンプレート
//関数 2値の最小値を返却する
//仮引数 型にこだわらない 変数 a b
//返却値 仮引数で与えられた値の小さいほうを返却します

template <class type>
type min_of(type a,type b)
{
	//	a b が整数型であれば 比較し小さい値を返却することになる
	return  a >=  b ? b : a;
}
