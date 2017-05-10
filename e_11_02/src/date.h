/*
演習11-2 クラスDATE第2版に抽出子を追加しなさい

作成日 2017年5月10日

作成者 平澤敬介
*/

#ifndef DATE_H_
#define DATE_H_

#include<iostream>

class Date{

// デフォルトがプライベート
public:
	int year_now;			//年の意味を持つデータメンバ
	int month_now;			//月の意味を持つデータメンバ
	int day_now;			//日の意味を持つデータメンバ
public:
	//デフォルトコンストラクタ
	Date();
	//コンストラクタ
	Date(int yy,int mm = 1,int dd = 1)
	{
		year_now = yy;		//mainでオブジェクトが初期化されたとき、年に与えられる値をデータメンバに代入します
		month_now = mm;		//mainでオブジェクトが初期化されたとき、月に与えられる値をデータメンバに代入します
		day_now = dd;		//mainでオブジェクトが初期化されたとき、日に与えられる値をデータメンバに代入します
	}

	//メンバ関数 データメンバの年を返却します
	//仮引数 無し
	//返却値 データメンバの年

	int year() const {

		return year_now;
	}

	//メンバ関数 データメンバの月を返却します
	//仮引数 無し
	//返却値 データメンバの月

	int month() const {

		return month_now;
	}

	//メンバ関数 データメンバの日を返却します
	//仮引数 無し
	//返却値 データメンバの日

	int day() const {

		return day_now;
	}
};
//演習部分 抽出子と挿入子を定義します
std::ostream& operator<<(std::ostream& s,const Date& x);
std::istream& operator>>(std::istream& s,Date& x);

#endif /* DATE_H_ */
