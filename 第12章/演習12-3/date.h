/*
 * date.h
 *
 *  Created on: 2017/05/02
 *      Author: admin
 */

#ifndef DATE_H_
#define DATE_H_

#include<iostream>
#include"class.h"

class date{
public:
	int y1;
	int m1;
	int d1;

public:
	date();
	date(int y2,int m2 = 1,int d2 = 1)
	{
		y1 = y2;
		m1 = m2;
		d1 = d2;
	}

	int year() const { return y1;}
	int month() const { return m1;}
	int day() const { return d1;}
};

std::ostream& operator << (std::ostream& s,const date& tmp)
{
	return s << "誕生日 : " << tmp.year() << "年" << tmp.month() << "月" << tmp.day() << "日\n";
}
std::istream& operator >> (std::istream& s,date& tmp)
{
	std::cout << "誕生日\n";
	std::cout << "年 : ";
	s >> tmp.y1;
	std::cout << "月 : ";
	s >> tmp.m1;
	std::cout << "日 : ";
	s >> tmp.d1;

	return s;
}


#endif /* DATE_H_ */
