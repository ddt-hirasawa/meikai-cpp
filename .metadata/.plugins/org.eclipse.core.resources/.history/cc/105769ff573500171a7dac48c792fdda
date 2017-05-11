#include<iostream>
#include"class.h"

void weekly(int serect)
{
	switch(serect){
	case 0: std::cout << "\n" << "日曜日\n"; break;
	case 1: std::cout << "\n" << "月曜日\n"; break;
	case 2: std::cout << "\n" << "火曜日\n"; break;
	case 3: std::cout << "\n" << "水曜日\n"; break;
	case 4: std::cout << "\n" << "木曜日\n"; break;
	case 5: std::cout << "\n" << "金曜日\n"; break;
	case 6: std::cout << "\n" << "土曜日\n"; break;
	}
}


Date Date::past(Date tmp) const
{
	if(tmp.m == 1 && tmp.d ==1){
		tmp.y--;
		tmp.m = 12;
		tmp.d = M12;
		goto Exit;
	}

	tmp.d--;
	if(tmp.d == 0){
		tmp.m--;
		switch(tmp.m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:tmp.d = M12; break;

		case 2:tmp.d = M2; break;

		case 4:
		case 6:
		case 9:
		case 11:tmp.d = M11; break;
		}
	}
	Exit:
	;
	return tmp;
}

int Date::week() const
{
	int year = y;
	int month = m;
	if(month ==1 || month == 2){
		year--;
		month += 12;
	}
	return (year + year / 4 - year / 400 + (13 * month +8) / 5 + d) %7;
}

//std::string to_string() const
