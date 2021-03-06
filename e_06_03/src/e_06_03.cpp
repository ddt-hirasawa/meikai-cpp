/*
演習6-3 3つの整数値から中央値を返却する関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要
int med(int,int,int);

int main()
{
	//宣言 中央値の返却を行います
	cout << "中央値を返却します。\n";

	int nInt[3];	// 配列を定義 代入された値をで中央値を出します

	// 配列に3個整数を格納するためループ処理を行う
	for(int i=0; i < 3; i++) {

		//配列の値の入力を促す
		cout << "nInt[" << i << "] :";

		//キーボードからの値を代入する
		cin >> nInt[i];
	}

	int medium = med(nInt[0],nInt[1],nInt[2]);	// 関数呼び出し部分 配列の中から中央値を出し変数m に代入する

	// 入力された数値の中から中央値が返却されます
	cout << "中央値 : " << medium << "です。";

	return 0;
}

//中央値を a b c の中から出し return により変数に返却する関数
//仮引数 a b c 個の値をif文で比較して中央値を出します
//返却値 medium a b c を比較したときの中央値を代入し、返却します

int med(int a,int b,int c)
{
	int medium = a;	// 最初に渡された a で初期化します

	// c <= b <= medium のとき
	if(c <= b && b <= medium) {

		//中央値を b に更新します
		medium = b;

	// b <= c <= medium のとき
	} else if(b <= c && c <= medium) {

		//中央値を c に更新します
		medium = c;

	// medium <= b <= c のとき
	}else if(medium <= b && b <= c) {

		//中央値を b に更新します
		medium = b;

	// medium <= c <= b のとき
	}else if(medium <= c && c <= b) {

		//中央値を c に更新します
		medium = c;
	}

	// medium はif文を超えて中央値になりました
	return medium;
}
