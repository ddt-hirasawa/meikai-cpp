/*
演習11-7 演習10－2で作成した自動車クラスに購入日を格納するデータメンバ、それを返却するメンバ関数を作成せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>

#include"date.h"

//挿入子
std::ostream& operator<<(std::ostream& s,const Date& x)
{
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
}

//抽出し
std::istream& operator>>(std::istream& s,Date& x)
{
	std::cout << "何年 : ";
	s >> x.year_me;

	std::cout << "何月 : ";
	s >> x.month_me;

	std::cout << "何日 : ";
	s >> x.day_me;

	return s;
}
