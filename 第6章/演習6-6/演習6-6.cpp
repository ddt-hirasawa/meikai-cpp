// 演習 6-6 こんにちは と表示する関数を作成する

#include<iostream>

using namespace std;

void hello();// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	// 関数呼び出し部分 void なので 値の返却は行われない
	hello();

	return 0;
}

// こんにちわ と表示する関数
void hello()
{
	cout << "『こんにちわ。』";
}
