/*
演習6-10 正の整数値を入力されたときのみ値を返却する関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//関数の宣言部分
int read_pint();

int main()
{
	// 関数呼び出し部分 main内では関数の呼び出しのみを行う
	// 変数も定義しない
	read_pint();

	return 0;
}

//関数 正の整数が入力されるまで入力を繰り返す関数
//仮引数 無し
//返却値 関数内で入力された正の整数 nInt

int read_pint()
{
	int nInt;	//関数内で変数を宣言 個の値を添客する

	// 正の整数が入力されるまで終わらない
	do{
		// 宣言 正の整数値
		cout << "正の整数値 : ";

		// キーボードからの値を代入する
		cin >> nInt;

	// 0か負の値ならばやり直し
	}while(nInt <= 0);

	// do while を抜けた値を返却する
	return nInt;
}
