/*
演習6-2 3つの整数値から、その最小値を返却する関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要
int min(int,int,int);

int main()
{
	// 宣言 最小値の返却を行う
	cout << "最小値を返却します。\n";

	int nInt[3];

	// 配列に3個整数を格納するためループ処理を行う
	for(int i=0; i < 3; i++) {

		// 配列の値の入力を促す
		cout << "a[" << i << "] :";

		// キーボードからの値を代入する
		cin >> nInt[i];
	}

	int Min = min(nInt[0],nInt[1],nInt[2]);		// 関数を呼び出す部分 変数 m に最小値を代入する

	cout << "最小値 :" << Min << "です。";

	return 0;
}

//最小値を返却する関数 a b c の中での最小値をreturnにより返却する
//仮引数 int a,b,c 個の値をif文で比較していき、最小値を探します
//返却値 min 初期値を a として,b,cを比較し更新して一番小さい値になったとき返却する
int min(int a,int b,int c)
{
	int min = a;	// 初期値を最初に渡される a として処理を行っていく

	// 最小値min が bより大きいならば
	if(b < min) {

		// 最小値min を b に更新します
		min = b;
	}
	// 最小値min が c より大きいならば
	if(c < min) {

		// 最小値min を c に更新します
		min = c;
	}

	// if文を通過したminは一番小さい値に更新されているので返却を行う
	return min;
}
