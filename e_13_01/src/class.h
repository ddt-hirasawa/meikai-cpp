#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>
#include<string>


//	1  2  3  4  5  6  7  8  9  10 11 12 月の末日
const int dmax[] = {31,28,31,30,31,30,31,31,30,31,30,31};

class date{
public:
	int y,m,d;		// 西暦 月 日 を与えるデータメンバを構築する
	//static int dmax[];	// 静的メンバ 1月から12月の末日を配列に保管している
	static int days_of_month(int y,int m);	//静的メンバ関数

public:
	// デフォルトコンストラクタ
	date();
	// コンストラクタ「
	date(int yy, int mm, int dd);
	//引数として与えた西暦はうるう年かどうかbool型で返却を行う関数
	static bool leap_year(int year)
	{
		return (year%4 == 0 && year%100) || year%400;// テキストの通りだと警告が消えない && (もしくは) の部分をかっこでくくること
	}

	//メンバ関数 データメンバの年を返却します
	//仮引数 無し
	//返却値 データメンバの年
	int year() const {

		return y;
	}

	//メンバ関数 データメンバの月を返却します
	//仮引数 無し
	//返却値 データメンバの月
	int month() const {

		return m;
	}

	//メンバ関数 データメンバの日を返却します
	//仮引数 無し
	//返却値 データメンバの日
	int day() const {

		return d;
	}

	//メンバ関数 うるう年か判定します
	//仮引数 無し
	//返却値 true or false
	bool leap_year() const {
		//関数の呼び出し
		return leap_year(y);
	}

	// 関数の宣言部分 課題以外の関数をすべて fanc.cpp にまとめる
	date past() const;
	date future() const;
	int day_of_week() const;
	int day_of_year() const;

	// 関数の宣言部分 課題の関数をすべて order.cpp にまとめる
	bool operator == (const date& tmp);
	bool operator != (const date& tmp);
	bool operator << (const date& tmp);
	date operator - (const date& tmp);
	date operator ++ ();		//前置バージョン
	date operator -- (int);		//後置バージョン
	date operator += (int);
	date operator -= (int);

	std::string to_string() const;

};

std::ostream& operator << (std::ostream& s,const date& x);
std::istream& operator >> (std::istream& s,date& x);

#endif /* CLASS_H_ */
