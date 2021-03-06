
/*
演習11-5 日付を読み込んで、その曜日を求めて表示するプログラムの作成

作成日 2017年5月10日

作成者 平澤敬介

編集日 2017年5月12日
*/

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include<iostream>


//1月～12月の末日を定義します
//うるう年は無視します
#define LASTM1 31
#define LASTM2 28
#define LASTM3 31
#define LASTM4 30
#define LASTM5 31
#define LASTM6 30
#define LASTM7 31
#define LASTM8 31
#define LASTM9 30
#define LASTM10 31
#define LASTM11 30
#define LASTM12 31

//曜日を表示する関数の宣言
void weekly(int);

class Date{

public:
	int year_now;		//データメンバ 年
	int month_now;		//データメンバ 月
	int day_now;		//データメンバ 日

public:
	//デフォルトコンストラクタ
	Date();
	//コンストラクタ
	Date(int yy,int mm=1,int dd=1)
	{
		year_now = yy;
		month_now = mm;
		day_now = dd;
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

	//関数の宣言
	Date past(Date tmp) const;
	int week() const;
	std::string to_string() const;

};

std::ostream& operator << (std::ostream& stream,const Date& tmp);
std::istream& operator >> (std::istream& stream,Date& tmp);

#endif /* CLASS_H_ */
