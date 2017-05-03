#include<iostream>
#include"class.h"

using namespace std;

int Date::dswitch(int serect) const
{
	int obj;
	switch(serect){
	case 1:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M1 || obj < 1)
			cout << "やり直し(1 ～" << M1 <<"日まで)";
		}while(obj < 1 || obj > M1); break;
	case 2:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M2 || obj < 1)
			cout << "やり直し(1 ～" << M2 <<"日まで)";
		}while(obj < 1 || obj > M2); break;
	case 3:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M3 || obj < 1)
			cout << "やり直し(1 ～" << M3 <<"日まで)";
		}while(obj < 1 || obj > M3); break;
	case 4:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M4 || obj < 1)
			cout << "やり直し(1 ～" << M4 <<"日まで)";
		}while(obj < 1 || obj > M4); break;
	case 5:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M5 || obj < 1)
			cout << "やり直し(1 ～" << M5 <<"日まで)";
		}while(obj < 1 || obj > M5); break;
	case 6:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M6 || obj < 1)
			cout << "やり直し(1 ～" << M6 <<"日まで)";
		}while(obj < 1 || obj > M6); break;
	case 7:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M7 || obj < 1)
			cout << "やり直し(1 ～" << M7 <<"日まで)";
		}while(obj < 1 || obj > M7); break;
	case 8:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M8 || obj < 1)
			cout << "やり直し(1 ～" << M8 <<"日まで)";
		}while(obj < 1 || obj > M8); break;
	case 9:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M9 || obj < 1)
			cout << "やり直し(1 ～" << M9 <<"日まで)";
		}while(obj < 1 || obj > M9); break;
	case 10:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M10 || obj < 1)
			cout << "やり直し(1 ～" << M10 <<"日まで)";
		}while(obj < 1 || obj > M10); break;
	case 11:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M1 || obj < 1)
			cout << "やり直し(1 ～" << M11 <<"日まで)";
		}while(obj < 1 || obj > M11); break;
	case 12:
		do{
		cout << "日 : ";
		cin >> obj;
		if(obj > M12 || obj < 1)
			cout << "やり直し(1 ～" << M12 <<"日まで)";
		}while(obj < 1 || obj > M12); break;
	}

	return obj;
}

std::ostream& operator << (std::ostream& stream,Date& tmp)
{
	return stream
	<< tmp.year()
	<< "年"
	<< tmp.month()
	<< "月"
	<< tmp.day()
	<< "日\n";
}
std::istream& operator >> (std::istream& stream,Date& tmp)
{
	do{
	cout << "年 : ";
	stream >> tmp.y;
	if(tmp.y >= 2100 || tmp.y < 1900)
		cout << "やり直し(1900 ～ 2100年まで)";
	}while(tmp.y < 1900 || tmp.y > 2100);
	do{
	cout << "月 : ";
	stream >> tmp.m;
	if(tmp.m > 12 || tmp.m < 1)
		cout << "やり直し(1 ～ 12月まで)";
	}while(tmp.m < 1 || tmp.m > 12);
	/*do{
	cout << "日 : ";
	stream >> tmp.d;
	if(tmp.d > 31 || tmp.d < 1)
		cout << "やり直し(1 ～ 31日まで)";
	}while(tmp.d < 1 || tmp.d > 31);
*/
	return stream;
}
