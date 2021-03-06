/*
 * date.h
 *
 *  Created on: 2017/05/10
 *      Author: admin
 */

#ifndef DATE_H_
#define DATE_H_

#include<iostream>

class Date{

public:
	int year_me;		//誕生した年
	int month_me;		//誕生した月
	int day_me;			//誕生した日

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

std::ostream& operator << (std::ostream& stream, const Date& tmp);

#endif /* DATE_H_ */
