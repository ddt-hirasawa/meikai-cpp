//演習6-14 変数 a b を昇順にソートする a <= b に並べ替える関数の作成を行う

#include<iostream>

using namespace std;

void sort(int&,int&);// 関数の宣言 参照渡しにより値を交換する

int main()
{
	int a,b;
	cout << "整数を入力 :";
	cin >> a >> b;

	// 関数呼び出し部分 入力した 変数 a b を与え並べ替える
	sort(a,b);

	cout << "昇順\n" << b << "\n" << a;

	return 0;
}

// 関数部分 参照渡しにより yのほうが大きくなるように値を交換する
void sort(int& x,int& y)
{
			// 関数内部で 変数を宣言 仮にxのほうが大きい場合
	if(x > y){
		//変数をxの値で初期化し参照渡しにより値を交換する
		int tmp = x;
		//x は y を参照する
		x        = y;
		//yにtmp の変数を代入する
		y      = tmp;
	}
}
