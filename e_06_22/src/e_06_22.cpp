/*
演習6-22 xの2乗 3乗を返却するインライン関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//インラインとなった関数 実行効率の改善が期待できる
inline double square(double);
//インラインとなった関数 実行効率の改善が期待できる
inline double cube(double);

int main()
{
	double r; //変数の定義 この変数に代入された値を2乗 3乗あいて表示する

	// 変数の値をキーボードから読み込む部分 正 負 浮動小数点 どの値でも構わない
	cout << "double型 : ";

	// キーボードからの値を代入する部分
	cin >> r;

	// 関数呼び出し部分 2乗値と3乗値を同時に表示する
	// 小規模ではあるが double型はメモリが大きいので 単純な処理であれば極力
	//インライン関数にしたほうがよい
	cout << "2乗は " << square(r) << "\n3乗は " << cube(r) << " です。";

	return 0;
}

// インライン関数と関数の打ち込むときの違いは inline が付くか付かないかと言うだけ
// 関数を呼び出すわけではなく main部分に埋め込まれているイメージ

//関数 2乗を返却する関数
//仮引数 l この値を2乗する
//返却値 仮引数の2乗値を返却する

inline double square(double l)
{
	// l * l で2乗値
	return l*l;
}

//関数 3乗を返却する関数
//仮引数 l この値を3乗する
//返却値 仮引数の3乗値を返却する

inline double cube(double l)
{
	// l * l * l で3乗値
	return l*l*l;
}
