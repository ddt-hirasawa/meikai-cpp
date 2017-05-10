
/*
演習11-5 日付を読み込んで、その曜日を求めて表示するプログラムの作成

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

//関数 ツェラーの公式により、0～6の数字が与えられます。それを曜日に反映させます
//仮引数 ツェラーの公式により、与えられる0～6の数字
//返却値 無し

void weekly(int serect) {

	//それぞれの曜日を表示させます
	switch (serect) {

	//0が入力されて時、日曜日のようです
	case 0:
		std::cout << "\n" << "日曜日\n";
		break;

	//1が入力されて時、月曜日のようです
	case 1:
		std::cout << "\n" << "月曜日\n";
		break;

	//2が入力されて時、火曜日のようです
	case 2:
		std::cout << "\n" << "火曜日\n";
		break;

	//3が入力されて時、水曜日のようです
	case 3:
		std::cout << "\n" << "水曜日\n";
		break;

	//4が入力されて時、木曜日のようです
	case 4:
		std::cout << "\n" << "木曜日\n";
		break;

	//5が入力されて時、金曜日のようです
	case 5:
		std::cout << "\n" << "金曜日\n";
		break;

	//6が入力されて時、土曜日のようです
	case 6:
		std::cout << "\n" << "土曜日\n";
		break;
	}
}

//メンバ関数 今の日付を昨日に戻します
//仮引数 今日の日付を持ったクラスオブジェクト
//返却値 昨日に変換したクラスオブジェクト

Date Date::past(Date tmp) const {

	//今日が1月1日のときは例外とします
	if (tmp.month_now == 1 && tmp.day_now == 1) {

		tmp.year_now--;				//去年の日付に戻し
		tmp.month_now = 12;			//12月の
		tmp.day_now = LASTM12;		//大晦日に戻します

	//去年に戻ることがなければ共通の処理を行います
	} else {

		tmp.day_now--;		//昨日の日付に戻します

		//仮に月初めだったならば前の月に戻します
		if (tmp.day_now == 0) {

			tmp.month_now--;		//前の月に戻します

			//昨月は何月か判別し、末日に戻ります
			switch (tmp.month_now) {

			//今月は3月でした。うるう年は無視します
			case 2:
				tmp.day_now = LASTM2;
				break;

			//今月は 5 7 10 12でした
			case 4:
			case 6:
			case 9:
			case 11:
				tmp.day_now = LASTM11;
				break;
			//それ以外は、末日がすべて31日です
			default : tmp.day_now = LASTM1;
			}
		}
	}
	//昨日の日付のオブジェクトを返却します
	return tmp;
}

//関数 ツェラーの公式を使い、0～6の数字を作ります
//仮引数 無し
//返却値 曜日に当たる0～6の数字

int Date::week() const {
	int year = year_now;		//変数に年 月 を代入します
	int month = month_now;		//値を変更する可能性があるからです

	//1月か2月の時
	if (month == 1 || month == 2) {

		//前の年に戻し
		year--;
		//その分、12月分加算します
		month += 12;
	}
	//ツェラーの公式で返却します
	return (year + year / 4 - year / 400 + (13 * month + 8) / 5 + day_now) % 7;
}

