/*
演習11-4 コンストラクタ初期化子によって明示的に初期化しない場合、メンバ部分オブジェクトが
デフォルトコンストラクタで初期化されることを確認せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

using namespace std;

//コンストラクタ
Account::Account(string name,string num,long amnt,int y,int m,int d)

	//オブジェクトの初期化、構築
	//Dateのデフォルトコンストラクタの呼び出し
	//下段に呼び出される
	: open(y) //: open(y,m,d)
{
	full_name = name;			//クラスオブジェクトが生成されたとき、初期化のとき与えられた name をデータメンバに与える
	number = num;				//クラスオブジェクトが生成されたとき、初期化のとき与えられた num をデータメンバに与える
	balance = amnt;				//クラスオブジェクトが生成されたとき、初期化のとき与えられた amtをデータメンバに与える

	//上の段に呼び出される
	open = Date(y,m,d);		//クラスオブジェクトが生成されたとき、初期化のとき与えられた Date をデータメンバに与える
}

//メンバ関数 お金を預けます
//仮引数 預金する額
//返却値 無し

void Account::deposit(long tmp)
{
	balance += tmp;
}

//メンバ関数 お金を引き出します
//仮引数 引き出す額
//返却値 無し

void Account::with(long tmp)
{
	balance -= tmp;
}
//抽出子
istream& operator>>(istream& s,Date& x)
{
	cout << "年 : ";
	s >> x.year_me;
	cout << "月 : ";
	s >> x.month_me;
	cout << "日 : ";
	s >> x.day_me;
	return s;
}
