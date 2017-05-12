/*
演習12-2 クラス Boolean に private の v がFalseであればbool型の true を Trueであれば
bool型のfalseを返却する演算子関数!を追加せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

using namespace std;

// 2つの整数x,yが等しいかどうか
// クラスのenum の False か True を返却する
Boolean int_ep(int x, int y)
{
	// x = y なら Boolean のFalse を
	//異なる場合は Trueを返却します
	return x == y;
}

int main()
{
	int n;			// 関数用にキーボードから入力する値を補完する変数
	Boolean a;		// デフォルトコンストラクタ Falseが入っていいる
	Boolean b = a;	// a をコピーしているコピーコンストラクタ False
	Boolean c = 100;// 1以上は true扱いになるので True
	Boolean x[8];	//x[0] ～ x[7] までデフォルトで falseが入っている

	//配列の値と比べるために入力してもらいます
	cout << "整数値 : ";

	//キーボードからの値を代入
	cin >> n;

	x[0] = int_ep(n,8);			// 入力された値が8の時、クラスはFALSEを返してきます
	x[1] = (n != 3); 			//入力された値が3の時、クラスはFALSEを返してきます   つまりは逆
	x[2] = Boolean::False;		//クラスのFALSEを呼び出します
	x[3] = 1000;				//bool では1以上が TRUE クラスでは やはり逆
	x[4] = c == Boolean::True;	//クラスのenum TRUE と 初期値 c = 100 が等しいなら boolではtrue 異なっているのにクラスでは true

	//クラスオブジェクトを変換してint型の数字にします
	cout << "aの値 " << int(a) << "\n";

	//クラスオブジェクトを変換してconst char* 型にします
	cout << "bの値 " << static_cast<const char*>(b) << "\n";

	//配列の全要素を比較します
	for(int i=0;i < 8;i++){

		cout << "x[" << i << "] = " << (x[i]) << "\n";
		// 変更点 演算子関数!を使っている部分
		// クラスの true falseとは逆の表示にナル

		//訂正部分 bool 型の値をアルファベット表記します
		cout << boolalpha;
		cout << "bool型 : " << (!x[i]) << "\n";
	}
	return 0;
}

//ソースファイルに埋め込まれた挿入子
inline ostream& operator << (ostream& s,Boolean& x)
{
	//クラスオブジェクトを文字に変換します
	return s << static_cast<const char*>(x);
}
