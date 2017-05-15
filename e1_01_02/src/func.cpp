/*
演習1-2 クラスDate でありえない日にちを訂正するようにしてください

作成日 2017年5月15日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

using namespace std;

ostream& operator << (std::ostream& stream,const Date& tmp) {

	return stream << "西暦" << tmp.open_year() << "年"
			<< tmp.open_month() << "月"
			<< tmp.open_day() << "日\n";
}


std::istream& operator >> (std::istream& stream,const Date& tmp);
