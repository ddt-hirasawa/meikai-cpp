/*
演習4-13 性別 季節 曜日を表す列挙体を自由に定義せよ

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	enum weekly {MON,TUE,WED,THU,FRI,SAT,SAN}; // 曜日の列挙体 月曜日から日曜日に順で定義します

	time_t current = time(NULL);				// 標準時間を得る宣言

	string Weekly;								// 文字列で曜日を表現します

	struct tm* timer = localtime(&current);		// timer -> で 表示したい 年 月 日 時間 を指すことができる

	int temp = timer -> tm_wday-1;				// int型で現在の曜日を受け取る

	weekly select =  static_cast<weekly>(temp);	// enum に型を変更しswitch文で使います

	// enum でswitch文を使います
	switch(select) {

	// MON のとき 月を文字列に代入します
	case MON : Weekly = "月"; break;

	// TUE のとき 火を文字列に代入します
	case TUE : Weekly = "火"; break;

	// WED のとき 水を文字列に代入します
	case WED : Weekly = "水"; break;

	// THU のとき 木を文字列に代入します
	case THU : Weekly = "木"; break;

	// FRI のとき 金を文字列に代入します
	case FRI : Weekly = "金"; break;

	// SAT のとき 土を文字列に代入します
	case SAT : Weekly = "土"; break;

	// SAN のとき 日を文字列に代入します
	case SAN : Weekly = "日"; break;
	}

			//今日の西暦から日付まで並べて表示します。
	cout << "西暦" << timer -> tm_year + 1900 << "年" << timer -> tm_mon +1 << "月"
			//数字で返却されるので曜日のみ処理を変えます。
				   << timer -> tm_mday << "日 " << "(" << Weekly << ")";

	return 0;
}
