/*
演習14-2 クラスIntarray のオブジェクトを自己初期化する宣言 Intarray x = x; では、オブジェクトxのデータメンバ nelem と vec
が不定値で初期化される。自己初期化が行われた際、データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ

作成日 2017年5月12日

作成者 平澤敬介
*/


#include <iostream>
#include<iomanip>

#include"class.h"

using namespace std;

//関数宣言
void error_array_test(int size, int num);

int main()
{
	int num = 9;				//クラスオブジェクトの配列の要素数となる変数

	//要素数を決めます
	cout << "整数 : \n";

	//0 以上の整数値 テスト用
	//cin >> num;

	Intarray obj(num);		//配列オブジェクトの初期化

	//入力した要素数分クラスオブジェクトの値を代入する
	for (int i = 0; i < obj.size_set(); i++) {

		//値はカウントアップで埋めていく
		obj[i] = i;
	}

	Intarray Test_a(32);		//配列 128個の要素を持つ配列
	Intarray Test_b(64);		//配列 256個の要素を持つ配列

	error_array_test(20,22);

	//演算子 = の機能を確かめます
	cout <<	"Test_a と Test_b の要素数は"	<<	Test_a.size_set()	<<	"と"	<< Test_b.size_set();

	//obj の要素数が代入されました
	Test_a = Test_b = obj;

	//機能していれば objの要素数と同じになります
	cout << "から" << Test_a.size_set() << "と" << Test_b.size_set() << "に替わりました\n";

	//変更点 自己初期化
	//Intarray Test_c = Test_c;	//初期化 コンストラクタの機能の確認

	//機能していれば 4つのオブジェクトが同じ要素数になっているので確認します
	cout << "obj Test_a Test_b Test_c\n";

	//クラス名と変数を区切ります
	cout << "---------------------------\n";

	//要素数分値を表示し、消えているところがないか確認します
	for(int i=0; i < num; i++) {
		//それぞれの配列の全要素を表示します。
		//cout << setw(2) << obj[i] << setw(5) << Test_a[i] << setw(7) << Test_b[i] << setw(7) << Test_c[i] << "\n";
	}


	return 0;
}
