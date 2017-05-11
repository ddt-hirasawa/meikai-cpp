/*
 演習12-3 演習11-3で作成した時刻クラスに各種の演算子関数を追加せよ

 作成日 2017年5月11日

 作成者 平澤敬介
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
class time {
public:
	int year_birth;				//データメンバ 年
	int month_birth;			//データメンバ 月
	int day_birth;				//データメンバ 日
	int counter;				//データメンバ 末日を超えた分をカウントして月に反映させます
	int Matsubi;				//データメンバ 年度中の月の末日
	date birth;					//クラス型データメンバ 自分の誕生日をキーボード入力

public:
	//デフォルトコンストラクタ
	time();
	//コンストラクタ 経過日数を0 末日を31日で初期化する
	//
	time(int yy, int mm = 1, int dd = 1, const date& birth_day = date()) :
			counter(0), Matsubi(31), birth(birth_day)	//	オブジェクトの構築と初期化
														//カウンター -> 0  末日 -> 31日 誕生日 ->　クラス date のデフォルト
	{
		year_birth = yy;					//データメンバにクラスオブジェクトを初期化したときに与える値を代入
		month_birth = mm;					//データメンバにクラスオブジェクトを初期化したときに与える値を代入
		day_birth = dd;						//データメンバにクラスオブジェクトを初期化したときに与える値を代入
	}

	//メンバ関数 クラスオブジェクトに格納されている誕生日を表示します
	//仮引数 無し
	//返却値 クラスオブジェクトでまとめられた自分の誕生日

	date open() const {

		return birth;
	}

	//メンバ関数 データメンバの年を返却します
	//仮引数 無し
	//返却値 データメンバの年

	int year() const {

		return year_birth;
	}

	//メンバ関数 データメンバの月を返却します
	//仮引数 無し
	//返却値 データメンバの月

	int month() const {

		return month_birth;
	}

	//メンバ関数 データメンバの日を返却します
	//仮引数 無し
	//返却値 データメンバの日

	int day() const {

		return day_birth;
	}

	//メンバ関数 経過日数を返却する
	//仮引数 無し
	//返却値 データメンバの月を超えたカウントを返却

	int Count() const {

		return counter;
	}

	// 前置演算子 ++ を前に置く型
	time& operator++() {

		//dが末日にならなければ
		//そのまま、明日になる
		if (day_birth < Matsubi) {

			//次の月に向かいます
			day_birth++;

			//繰り越し分を加算
			counter++;

			//自分自身の参照を返却する
			//データメンバを更新する
			return *this;

			//その月の末日になったのなら
		} else {

			//月初めに向かい
			day_birth = 1;

			//12月ではないのなら
			if (month_birth < DECE) {

				//その月のデータメンバをインクリメントし
				month_birth++;

				//12月ならば
			} else {
				//1月に戻り
				month_birth = JANU;

				//来年になる
				year_birth++;
			}
			// 末日がその月で替わってくるため
			// うるう年でないなら 2月の末日は28日
			if (month_birth == 2) {

				Matsubi = matsubi3;
			// 4 6 9 11 月の末日は30日
			} else if (month_birth == 4 || month_birth == 6 || month_birth == 9
					|| month_birth == 11) {

				//末日を30日にします
				Matsubi = matsubi2;

			// それ以外の月の末日は31日
			} else {

				//末日を31日にします
				Matsubi = matsubi1;
			}

			//演算が終わった自分自身を返却します
			return *this;
		}
	}

	//指定した月になれば falseを返却する
	bool operator!() const {

		// ここでは2017年 12月 31日
		//if(y == NOW_YEAR && m == DECE && d == matsubi1)
		if (year_birth == birth.y1 && month_birth == birth.m1
				&& day_birth == birth.d1) {

			//誕生日になりました
			return false;

		//誕生日はまだです
		} else {

			//まだ、日数を表示していきます
			return true;
		}
	}

};

//挿入子
std::ostream& operator <<(std::ostream& s, const time& x) {
	//今の年 月 日 を表示します
	return s << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
}

#endif /* CLASS_H_ */