/*
演習11-7 演習10－2で作成した自動車クラスに購入日を格納するデータメンバ、それを返却するメンバ関数を作成せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>

class Date{

public:
	int year_me;		//開設した年
	int month_me;		//開設した月
	int day_me;			//開設した日

public:
	//デフォルトコンストラクタ
	Date();
	//コンストラクタ
	Date(int yy,int mm = 1,int dd = 1)
	{
		year_me = yy;			//クラスオブジェクトが生成されたとき、初期価値をyear_meに代入します
		month_me = mm;			//クラスオブジェクトが生成されたとき、初期価値をmonth_meに代入します
		day_me = dd;			//クラスオブジェクトが生成されたとき、初期価値をday_meに代入します
	}

	//メンバ関数 データメンバの年を返却します
	//仮引数 無し
	//返却値 データメンバの年

	int year() const {

		return year_me;
	}

	//メンバ関数 データメンバの月を返却します
	//仮引数 無し
	//返却値 データメンバの月

	int month() const {

		return month_me;
	}

	//メンバ関数 データメンバの日を返却します
	//仮引数 無し
	//返却値 データメンバの日

	int day() const {

		return day_me;
	}
};


std::ostream& operator<<(std::ostream& s,const Date& x);
std::istream& operator>>(std::istream& s,Date& x);
