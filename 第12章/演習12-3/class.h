/*
 * class.h
 *
 *  Created on: 2017/05/02
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

//日付クラス用の 末日 と 1月 12月 西暦 を定義する
#define matsubi1 31
#define matsubi2 30
#define matsubi3 28
#define JANU	1
#define DECE 12
#define NOW_YEAR 2017
#include<iostream>

#include"date.h"

// クラス time 西暦 月 日 を表示する データメンバは
// y 年　m 月　d 日　 counter 経過日数　Matsubi 28 ～ 31日
class time{
	int y;
	int m;
	int d;
	int counter;
	int Matsubi;
	date birth;

public:
	//デフォルトコンストラクタ
	time();
	//コンストラクタ 経過日数を0 末日を31日で初期化する
	//
	time(int yy,int mm=1,int dd=1,const date& birth_day = date())
	:counter(0),Matsubi(31), birth(birth_day)
	{
		y = yy;
		m = mm;
		d = dd;
	}

	date open() const { return birth; }
	int year() const { return y; }
	int month() const { return m; }
	int day() const { return d; }
	//経過日数を返却するメンバ関数
	int Count() const { return counter; }

	// 前置演算子 ++ を前に置く型
	time& operator++() {

		//dが末日にならなければ
		//そのまま、明日になる
		if(d < Matsubi){
			d++;
			counter++;
			//自分自身の参照を返却する
			//データメンバを更新する
			return *this;
	//その月の末日になったのなら
		}else{
		//月初めに向かい
			d = 1;
		//12月ではないのなら
			if(m < DECE){
			//その月のデータメンバをインクリメントし
				m++;
			//12月ならば
			}else{
			//1月に戻り
				m = JANU;
			//来年になる
				y++;
			}
			// 末日がその月で替わってくるため
			// うるう年でないなら 2月の末日は28日
				if(m == 2)
					Matsubi = matsubi3;
			// 4 6 9 11 月の末日は30日
				else if(m == 4 || m == 6 || m == 9 || m == 11 )
					Matsubi = matsubi2;
			// それ以外の月の末日は31日
				else
					Matsubi = matsubi1;
		return *this;
		}
	}

	// 後置演算子 ++ を後ろに置く型
	time operator++(int) {
			time x = *this;
			if(d >= Matsubi )
			d++;
			counter++;
			return x;
	}

	//指定した月になれば falseを返却する
	bool operator!() const {
		// ここでは2017年 12月 31日
		//if(y == NOW_YEAR && m == DECE && d == matsubi1)
		if(y == birth.y1 && m == birth.m1 && d == birth.d1)
			return false;
		else
			return true;

	}

};

std::ostream& operator << (std::ostream& s,const time& x)
{
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
}

#endif /* CLASS_H_ */
