//演習9-4 2値の最小値を求めるテンプレート関数の作成

#include<iostream>

using namespace std;

// 関数テンプレート
// 値を比較して小さい値を返却する関数の宣言
template <class type>
type min_of(type,type);

int main()
{
	int a = 1000;			//int int
	int b = 2100;			//int double
	double c = 999.99;		//double double それぞれで正常に動作するか
	double d = 2000;		//確認すること


	//比較する値をすべてコンソールに表示し
	//正常に動作しているのか確認する
	cout << "a : " << a << "\n"
			<< "b : " << b << "\n"
			<< "c : " << c << "\n"
			<< "d : " << d << "\n";
			//iint int
	cout << "a と b とで小さい値は " << min_of(a,b) << "です。\n"
			//int double	int 型はdouble型に変換する
		<< "a と c とで小さい値は " << min_of(double(a),c) << "です。\n"
			//double double で小さい値を返す
		<< "c と d とで小さい値は " << min_of(c,d) << "です。\n";
	return 0;
}

//関数テンプレート
//	最小値を求める type でテンプレート化した関数
template <class type>
type min_of(type a,type b)
{	//	a b が整数型であれば 比較し小さい値を返却することになる							//
	return  a >=  b ? b : a;
}
