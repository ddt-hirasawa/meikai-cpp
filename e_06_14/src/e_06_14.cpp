/*
演習6-14 変数 a b を昇順にソートする a <= b に並べ替える関数の作成を行う

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 参照渡しにより値を交換する
void sort(int&,int&);

int main()
{
	int nInta,nIntb;		// 変数の定義 参照を行いたいので仮に定義

	// 整数を入力するように促します
	cout << "整数を入力 :";

	// キーボードからの値を順に代入する
	cin >> nInta >> nIntb;

	// 関数呼び出し部分 入力した 変数 a b を与え並べ替える
	sort(nInta,nIntb);

	// 表示部分 関数を通過しているので昇順になっている
	cout << "昇順\n" << nIntb << "\n" << nInta;

	return 0;
}

// 関数部分 参照渡しにより yのほうが大きくなるように値を交換する
//仮引数 mainで定義されている変数の参照
//返却値無し

void sort(int& x,int& y)
{
	// 関数内部で 変数を宣言 仮にxのほうが大きい場合
	if(x > y) {

		int tmp = x;	//変数をxの値で初期化し参照渡しにより値を交換する

		//x は y を参照する
		x        = y;

		//yにtmp の変数を代入する
		y      = tmp;
	}
}
