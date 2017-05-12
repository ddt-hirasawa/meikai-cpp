/*
 演習12-3 演習11-3で作成した時刻クラスに各種の演算子関数を追加せよ

 作成日 2017年5月11日

 編集日 2017年5月12日

 作成者 平澤敬介
 */

#include<iostream>

// 自作 時間クラス を取り込む
#include"class.h"

//指定した 秒 後の時間に反映させます
Time& Time::operator +=(int n) {
	int cnt = 0;		//超過分を反映させるために設けます

	this->sec += n;

	//加算したとき 60秒以上のとき
	if (this->sec >= SS) {

		do {
			this->sec -= SS;		//1分は60秒です

			cnt++;			//超えた秒は分に換算します

			//60秒以内になれば終了
		} while (this->sec > SS );
	}

	this->min += cnt;				//分に反映させます

	cnt = 0;				//カウンタを0に戻し 分を超えた分をカウントします

	//加算したとき 60分以上のとき
	if (this->min >= MM) {

		//1時間の範囲に収まるように調整します
		do {
			this->min -= MM;		//1時間は60分です

			cnt++;			//超えた分は時間に換算します

			//60分以内になれば終了
		} while (this->min > MM );
	}

	this->hour += cnt;			//超えた分を時間に反映させます

	cnt = 0;

	//1日の範囲を超えた場合
	if (this->hour >= HH) {

		//1日の範囲に収まるように調整します
		do {

			this->hour -= HH;		//1日は24時間です

			//24時間以内になれば終了
		} while (this->hour > HH );
	}
	return *this;
}

//指定した 秒 前の時間に反映させます
Time& Time::operator -=(int n) {
	int cnt = 0;		//超過分を反映させるために設けます

	this->sec -= n;

	//減算したとき 0秒以下のとき
	if (this->sec <= NN) {

		do {
			this->sec += SS;		//1分は60秒です

			cnt++;			//超えた秒は分に換算します

			//60秒以内になれば終了
		} while (this->sec > SS || this->sec < NN);
	}

	this->min -= cnt;				//分に反映させます

	cnt = 0;				//カウンタを0に戻し 分を超えた分をカウントします

	//加算したとき 60分以上のとき
	if (this->min <= NN) {

		//1時間の範囲に収まるように調整します
		do {
			this->min += MM;		//1時間は60分です

			cnt++;			//超えた分は時間に換算します

			//60分以内になれば終了
		} while (this->min > MM || this->min < NN);
	}

	this->hour -= cnt;			//超えた分を時間に反映させます

	cnt = 0;

	//1日の範囲を超えた場合
	if (this->hour <= NN) {

		//1日の範囲に収まるように調整します
		do {

			this->hour += HH;		//1日は24時間です

			//24時間以内になれば終了
		} while (this->hour > HH || this->hour < NN);
	}
	return *this;
}
