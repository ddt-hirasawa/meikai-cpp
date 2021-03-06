/*
 演習11-3 演習11－1で作成した時刻クラスに抽出子と挿入子を追加せよ

 作成日 2017年5月10日

 作成者 平澤敬介
 */

#include<iostream>
#include"class.h"

using namespace std;

//挿入子
ostream& operator <<(ostream& s, const Time& tmp) {
	// 時 分 秒 の順に並べて表示します
	s << tmp.Hour() << "時" << tmp.Min() << "分" << tmp.Sec() << "秒\n";

	return s;
}

//抽出子
istream& operator >>(istream& s, Time& tmp) {
	//範囲内の 時 で入力を受け付けます
	do {
		//
		cout << "何時 : ";
		s >> tmp.hour;

	// 0 ～ 23 の間で受け付けます
	} while (tmp.hour < NULL_ || HOUR <= tmp.hour);

	//範囲内の 分 で入力を受け付けます
	do {
		cout << "何分 : ";
		s >> tmp.min;

	// 0 ～ 60 の間で受け付けます
	} while (tmp.min < NULL_ || MIN <= tmp.min);

	//範囲内の 秒 で入力を受け付けます
	do {
		cout << "何秒 : ";
		s >> tmp.sec;

	// 0 ～ 60 の間で受け付けます
	} while (tmp.sec < NULL_ || SEC <= tmp.sec);

	return s;
}
