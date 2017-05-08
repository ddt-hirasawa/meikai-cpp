/*
演習 6-6 こんにちは と表示する関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要
void hello();

int main()
{
	// 関数呼び出し部分 void なので 値の返却は行われない
	hello();

	return 0;
}

// こんにちわ と表示する関数
//仮引数 なし
//返却値 なし

void hello()
{
	// コンソールに こんにちわ と表示するだけ
	cout << "『こんにちわ。』";
}
