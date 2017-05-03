/*
 * class.h
 *
 *  Created on: 2017/04/27
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>

#define HH 24	//	1日は24時間です			この４つの前提で時間クラスを
#define MM 60	//	1時間は60分です			扱います
#define SS 60	//	1分は60秒です
#define NN 0	//	時間の 0を基準としています

class Time{
public:
	int hour;		// 時 を扱う変数をクラス内部で定義する
	int min;		// 分 を扱う変数をクラス内部で定義する
	int sec;		// 秒 を扱う変数をクラス内部で定義する

public:			//公開メンバ
	Time();								//デフォルトコンストラクタ
	Time(int h,int m = 0,int s = 0)	//コンストラクタ
	{
		hour = h;	// 初期化を 0分 0秒で行う
		min = m;	//
		sec = s;	// すべての要素を初期化できないので h = 0 とはできない
	}

	int Hour() { return hour; }	//現在時刻を返却する ここでは 時
	int Min() { return min; }		//現在時刻を返却する ここでは 分
	int Sec() { return sec; }		//現在時刻を返却する ここでは 秒

	void plus_hour(int tmp)// 時を加算する メンバ関数
	{
		hour += tmp;	// 日 は定義されていないので 24時になれば 0時に
		if(hour >  HH)// 変換される。
		hour %= HH;
	}

	void plus_min(int tmp)// 分を加算する メンバ関数
	{
		int cnt = 0;
		min += tmp;			//
		if(min >  MM){		// 時が定義されているので 60分になれば 0分に変換され
			cnt = min / MM;// hour に
			min %= MM;		// 1時間 加算されていく。
		}					//
		hour += cnt;		//
	}

	void plus_sec(int tmp)// 秒を加算する メンバ関数
	{
		int cnt = 0;
		sec += tmp;			// 分が定義されているので 60秒になれば 0秒に変換され
		if(sec >  SS){		// min に
			cnt = sec / SS;// 1分加算されていく。
			sec %= SS;		//
		}					//
		min += cnt;
	}

};

std::ostream& operator << (std::ostream& stream,Time& obj);
std::istream& operator >> (std::istream& stream,Time& obj);

#endif /* CLASS_H_ */
