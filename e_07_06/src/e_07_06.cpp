/*
演習7-10 要素数 n の配列の全要素の合計を返却する関数を作成する

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//関数の宣言 仮引数として 配列と要素数を与える
int sum_of(const int a[],int n);

int main()
{
	int a[200];		// 値を格納する配列を定義する 整数であるならどの値でも構わない
	int n;			// 要素数を代入する変数を定義する キーボードから配列の最大要素数を指定する

	// 配列の要素数を最大 100までで代入する部分 100以上、もしくは、負の値ならば入力のやり直し
	do{

	// 最大値を表示して、それ以上の値の入力を拒みます
	cout << "配列要素(最大 100) n : ";

	//入力部分,この値を要素数にする
	cin >> n;

	//負の値と101以上の値を省きます
	}while(n < 0 || n > 100);

	// 決めた要素数分 入力を行うため要素数分ループ処理を行う
	for(int i=0; i < n; i++) {

		//配列のどの要素に入力するのか見せます
		cout << "a[" << i << "] = ";

		// キーボードからの値を代入する部分
		cin >> a[i];
	}

	// 関数呼び出し部分 1～10までで 55の値が返却されてくる
	// 仮引数は 配列 a と 要素数 n　aの表記はこのままで構わない
	// 訂正部分 入力された n は要素数でしたので 最大要素は n -1 になります
	cout << "配列a[0]～a[" << n-1 << "]までの全要素の和は " << sum_of(a,n) << " です。";

	return 0;
}

//関数 配列の要素をすべて加算し返却を行う関数
//仮引数 配列の先頭要素のポインタ a（配列の値の変更はしない) と要素数
//返却値 関数内で定義された合計を表示するための変数 sum

int sum_of(const int a[],int n)
{
	// 関数内部で変数を宣言する 合計は 現状　０
	int sum = 0;
	// 要素数分ループ処理を行い 合計にポインタの指すオブジェクトを加算していく
	for(int i=0; i < n; i++) {

		//sumにポインタの指すオブジェクトを加算していく
		sum += *(a+i);
	}
	return sum;
}
