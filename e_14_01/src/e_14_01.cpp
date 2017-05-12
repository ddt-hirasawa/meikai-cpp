/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#include <iostream>
#include<iomanip>

#include"class.h"

using namespace std;

int main()
{
	int num;				//クラスオブジェクトの配列の要素数となる変数

	//要素数を決めます
	cout << "整数 : ";

	//0 以上の整数値 テスト用
	cin >> num;

	Intarray obj(num);		//配列オブジェクトの初期化

	//入力した要素数分クラスオブジェクトの値を代入する
	for (int i = 0; i < obj.size_set(); i++) {

		//値はカウントアップで埋めていく
		obj[i] = i;
	}

	Intarray Test_a(128);
	Intarray Test_b(256);


	cout <<	"Test_a と Test_b の要素数は"	<<	Test_a.size_set()	<<	"と"	<< Test_b.size_set();

	Test_a = Test_b = obj;

	cout << "から" << Test_a.size_set() << "と" << Test_b.size_set() << "に替わりました\n";

	Intarray Test_c = Test_a;

	cout << "obj Test_a Test_b Test_c\n";

	cout << "---------------------------\n";

	for(int i=0; i < num; i++) {

		cout << setw(2) << obj[i] << setw(5) << Test_a[i] << setw(7) << Test_b[i] << setw(7) << Test_c[i] << "\n";
	}


	cout << "obj Test_a Test_b Test_c\n";

	cout << "---------------------------\n";

	for(int i=0; i < num; i++) {

		cout << setw(2) << obj[i] << setw(5) << Test_a[i] << setw(7) << Test_b[i] << setw(7) << Test_c[i] << "\n";


		obj.~Intarray(i);
		Test_a.~Intarray(i);
		Test_b.~Intarray(i);
		Test_c.~Intarray(i);
	}


	return 0;
}
