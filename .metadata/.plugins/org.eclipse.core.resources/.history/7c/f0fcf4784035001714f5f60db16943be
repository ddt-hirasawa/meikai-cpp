#include<iostream>
#include"date.h"

using namespace std;

int main()
{
	const Date now(2017);

	cout << "現在 : "<< now.year() << "年" << now.month() << "月" << now.day()
			<< "日\n";

	Date past(0);
	cin >> past;

	cout << "誕生日\n";
	cout << past;

	return 0;
}


ostream& operator<<(ostream& s,const Date& x)
{
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
}

istream& operator>>(istream& s,Date& x)
{
	cout << "年 : ";
	s >> x.y;
	cout << "月 : ";
	s >> x.m;
	cout << "日 : ";
	s >> x.d;
	return s;
}
