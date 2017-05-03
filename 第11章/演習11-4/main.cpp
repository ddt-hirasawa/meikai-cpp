#include<iostream>
#include<string>
#include"class.h"

using namespace std;

Account::Account(string name,string num,long amnt,int y,int m,int d)
	: open(y) //: open(y,m,d)
{
	full_name = name;
	number = num;
	balance = amnt;
	open = Date(y,m,d);
}

void Account::deposit(long tmp)
{
	balance += tmp;
}

void Account::with(long tmp)
{
	balance -= tmp;
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

int main()
{
	Account hira("平澤敬介","123456789",1000,2017,3,3);

	cout << "名義 : " << hira.name() << "\n"
			<< "口座 : " << hira.no() << "\n"
			<< "預金 : " << hira.bal() << "\n"
			<< "開設日: " << hira.openDate().year() << "年"
			<< hira.openDate().month() << "月"
			<< hira.openDate().day() << "日\n";

	Account kei("平澤敬介","123456789",1000,1900);

	cout << "名義 : " << kei.name() << "\n"
			<< "口座 : " << kei.no() << "\n"
			<< "預金 : " << kei.bal() << "\n"
			<< "開設日: " << kei.openDate().year() << "年"
			<< kei.openDate().month() << "月"
			<< kei.openDate().day() << "日\n";

	return 0;
}
