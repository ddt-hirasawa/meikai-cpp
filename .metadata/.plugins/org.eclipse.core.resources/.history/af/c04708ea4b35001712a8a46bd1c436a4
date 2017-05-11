


#ifndef DATE_H_
#define DATE_H_

#include<iostream>

class Date{
public:		// デフォルトがプライベート
	int y;
	int m;
	int d;
public:
	Date();
	Date(int yy,int mm = 1,int dd = 1)
	{
		y = yy;
		m = mm;
		d = dd;
	}

	int year() const { return y; }
	int month() const { return m; }
	int day() const { return d; }
};
std::ostream& operator<<(std::ostream& s,const Date& x);
std::istream& operator>>(std::istream& s,Date& x);

#endif /* DATE_H_ */
