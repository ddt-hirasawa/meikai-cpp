
/*
演習11-5 日付を読み込んで、その曜日を求めて表示するプログラムの作成

作成日 2017年5月10日

作成者 平澤敬介

編集日 2017年5月12日
*/

#include<iostream>
#include"class.h"

using namespace std;

//挿入子
ostream& operator <<(ostream& stream, const Date& tmp) {

	return stream << tmp.year() << "年" << tmp.month() << "月" << tmp.day() << "日\n";
}
//抽出子
istream& operator >>(istream& stream, Date& tmp) {
	//西暦の入力を行います
	cout << "1900 ～ 2100年まで\n";

	do {
		//宣言
		cout << "年 : ";

		//データメンバにキーボードからの値を代入します
		stream >> tmp.year_now;

		//入力した値が 1900年 ～ 2100年以外だったならばやり直し
		if (tmp.year_now >= 2100 || tmp.year_now < 1900) {
			cout << "やり直し(1900 ～ 2100年まで)";
		}
		//再入力を要求します
	} while (tmp.year_now < 1900 || tmp.year_now > 2100);

	//月の入力を行います
	cout << "1～12月まで\n";

	do {
		//宣言
		cout << "月 : ";

		//データメンバにキーボードからの値を代入します
		stream >> tmp.month_now;

		//入力した値が1から12の月に該当しなかったならば
		if (tmp.month_now > 12 || tmp.month_now < 1) {
			cout << "やり直し(1 ～ 12月まで)";
		}
		//再入力を要求します
	} while (tmp.month_now < 1 || tmp.month_now > 12);

	int day_max;		//その月の末日を決めて入力の際,上限にします。

	//入力された月で末日が変わってきます
	switch(tmp.month_now) {

	case 2 : day_max = LASTM2; break;	//2月はうるう年もありますが無視します。
	case 4 :
	case 6 :
	case 9 :
	case 11: day_max = LASTM4; break;	//4 6 9 11 月は30日まであります

	default : day_max = LASTM12; break;	// それ以外は 31日まであります
	}

	//日の入力を行います
	cout << "1～" << day_max << "日まで\n";

	do {
		//宣言
		cout << "日 : ";

		//データメンバにキーボードからの値を代入します
		stream >> tmp.day_now;

		//入力した値がその月の末日までに該当しなかったならば
		if (tmp.day_now > day_max || tmp.day_now < 1) {
			cout << "やり直し(1 ～" << day_max << "日まで\n";
		}
		//再入力を要求します
	} while (tmp.day_now < 1 || tmp.day_now > day_max);


	return stream;
}
