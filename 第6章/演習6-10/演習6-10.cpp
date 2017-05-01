//演習6-10 正の整数値を入力されたときのみ値を返却する関数を作成する

#include<iostream>

using namespace std;

int read_pint();

int main()
{
	// 関数呼び出し部分 main内では関数の呼び出しのみを行う
	// 変数も定義しない
	read_pint();

	return 0;
}

// 正の整数が入力されるまで入力を繰り返す関数
int read_pint()
{
	int n;
	do{
		cout << "正の整数値 : ";
		cin >> n;
	}while(n <= 0);
	return n;
}
