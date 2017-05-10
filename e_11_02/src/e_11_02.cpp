/*
演習11-2 クラスDATE第2版に抽出子を追加しなさい

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include"date.h"

using namespace std;

int main()
{
	const Date now(2017);	//値を変更できないデフォルトコンストラクタの呼び出し 2017年1月1日で固定

	// now のクラスオブジェクトのデータメンバを表示していきます。
	cout << "現在 : "<< now.year() << "年" << now.month() << "月" << now.day() << "日\n";

	Date past(0);			//デフォルトコンストラクタ データメンバはキーボードからの入力で決める

	//抽出子を使い、past のデータメンバを決定します
	cin >> past;

	//仮に、誕生日とします
	cout << "誕生日\n";

	//挿入子で past のデータメンバを表示します
	cout << past;

	return 0;
}

//挿入子		挿入子の場合、オブジェクトの値を変更しない宣言が必要になります
ostream& operator<<(ostream& s,const Date& x)
{
	//構文 return s << クラスのメンバ関数;
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
}

//挿入子		挿入子の場合、オブジェクトの値を変更するのでconstは絶対につけない
istream& operator>>(istream& s,Date& x)
{
	//構文 s >> クラスのデータメンバ名
	cout << "年 : ";
	//オブジェクト名.データメンバ名
	s >> x.year_now;
	//構文 s >> クラスのデータメンバ名
	cout << "月 : ";
	//オブジェクト名.データメンバ名
	s >> x.month_now;
	//構文 s >> クラスのデータメンバ名
	cout << "日 : ";
	//オブジェクト名.データメンバ名
	s >> x.day_now;
	//挿入が終わったら、返却する
	return s;
}
