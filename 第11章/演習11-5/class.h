/*
 * class.h
 *
 *  Created on: 2017/04/28
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include<iostream>

#define M1 31// 1月から12月の末尾の
#define M2 28
#define M3 31
#define M4 30
#define M5 31
#define M6 30
#define M7 31
#define M8 31
#define M9 30
#define M10 31
#define M11 30
#define M12 31

void weekly(int);

class Date{
public:
	int y;
	int m;
	int d;

public:

	Date();
	Date(int yy,int mm=1,int dd=1)
	{
		y = yy;
		m = mm;
		d = dd;
	}

	int year() const { return y; }
	int month() const { return m; }
	int day() const { return d; }

	int dswitch(int serect) const;

	Date past(Date tmp) const;

	int week() const;

	std::string to_string() const;

};

std::ostream& operator << (std::ostream& stream,Date& tmp);
std::istream& operator >> (std::istream& stream,Date& tmp);

#endif /* CLASS_H_ */
