/*
 * date.h
 *
 *  Created on: 2017/05/01
 *      Author: admin
 */

#ifndef DATE_H_
#define DATE_H_

class date{
	int y;
	int m;
	int d;

public:
	date(int yy,int mm ,int dd )
	{
		y = yy;
		m = mm;
		d = dd;
	}

	int year() const { return y;}
	int month() const { return m;}
	int day() const { return d;}
};
std::ostream& operator<<(std::ostream& s,const date& x);


#endif /* DATE_H_ */
