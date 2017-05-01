//演習 6-1 正の値 負の値 0 で それぞれ 1 -1 0 をそれぞれ返却する関数を作成する

#include<iostream>

using namespace std;

int sign_of(int x);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	int n;
	cout << "入力し数字に対し-1～1の数字を返却します。\n"
			<< "入力 : ";
	cin >> n;

	// 関数呼び出し部分 変数i に関数の値が代入される
	int i = sign_of(n);

	cout << i;

	return 0;
}

// 符号により 返却する値を変える関数
int sign_of(int x)
{
	//正の値ならば 1を返却し関数を終わる
	if(x > 0) return 1;
	//負の値ならば -1を返却し関数を終わる
		else if(x < 0) return -1;
	//それ以外ならば 0を返却し関数を終わる
		else return 0;
}
