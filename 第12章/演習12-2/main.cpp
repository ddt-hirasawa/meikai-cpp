//演習12-2 クラス Boolean に private の v がFalseであればbool型の true を Trueであれば
//bool型のfalseを返却する演算子関数!を追加せよ

#include<iostream>
#include"class.h"

using namespace std;

// 2つの整数x,yが等しいかどうか
// クラスのenum の False か True を返却する
Boolean int_ep(int x, int y)
{
	return x == y;
}

int main()
{
	int n;			// 関数用にキーボードから入力する値を補完する変数
	Boolean a;		// デフォルトコンストラクタ Falseが入っていいる
	Boolean b = a;	// a をコピーしているコピーコンストラクタ False
	Boolean c = 100;// 1以上は true扱いになるので True
	Boolean x[8];	//x[0] ～ x[7] までデフォルトで falseが入っている

	cout << "整数値 : "; cin >> n;

	x[0] = int_ep(n,8);
	x[2] = Boolean::False;
	x[3] = 1000;
	x[4] = c == Boolean::True;
	cout << "aの値 " << int(a) << "\n";
	cout << "bの値 " << static_cast<const char*>(b) << "\n";

	for(int i=0;i < 8;i++){
		cout << "x[" << i << "] = " << x[i] << "\n";
		// 変更点 演算子関数!を使っている部分
		// クラスの true falseとは逆の表示にナル
		cout << "bool型 : " << !x[i];
		// 変更点 配列の値でbool型 0 1 を 文字
		// True False を表示する処理を行っています
		if(true == !x[i])
			cout << " TRUE\n";
		else
			cout << " FALSE\n";
	}
	return 0;
}
