/*
演習11-3 演習11－1で作成した時刻クラスに抽出子と挿入子を追加せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#ifndef CLASS_H_
#define CLASS_H_

#define HOUR 24	//	1日は24時間です			この４つの前提で時間クラスを
#define MIN 60	//	1時間は60分です			扱います
#define SEC 60	//	1分は60秒です
#define NULL_ 0	//	時間の 0を基準としています

#include<iostream>

class Time {

public:
	int hour;		// 時 を扱う変数をクラス内部で定義する
	int min;		// 分 を扱う変数をクラス内部で定義する
	int sec;		// 秒 を扱う変数をクラス内部で定義する

//公開メンバ
public:

	//デフォルトコンストラクタ
	Time();

	//コンストラクタ
	Time(int h, int m = 0, int s = 0) {
		hour = h;	// 初期化を 0分 0秒で行う
		min = m;	//
		sec = s;	// すべての要素を初期化できないので h = 0 とはできない
	}

	//メンバ関数 時を返却します
	//仮引数 無し
	//返却値 データメンバの時

	int Hour() const {

		//現在時刻を返却する ここでは 時
		return hour;
	}
	//メンバ関数 分を返却します
	//仮引数 無し
	//返却値 データメンバの分

	int Min() const {

		//現在時刻を返却する ここでは 分
		return min;
	}
	//メンバ関数 秒を返却します
	//仮引数 無し
	//返却値 データメンバの秒

	int Sec() const {

		//現在時刻を返却する ここでは 秒
		return sec;
	}

	//メンバ関数 時を加算する  日 は定義されていないので 24時になれば 0時に/ 変換される。
	//仮引数 加算する値
	//返却値 無し

	void plus_hour(int tmp) {
		hour += tmp;		//経過時間をデータメンバに反映させます
	}

	//メンバ関数 分を加算する
	//仮引数 加算する値
	//返却値 無し

	void plus_min(int tmp) {
		min += tmp;			//経過時間をデータメンバに反映させます
							// 時が定義されているので 60分になれば 0分に変換されます
	}
	//メンバ関数 秒を加算する
	//仮引数 加算する値
	//返却値 無し

	void plus_sec(int tmp) {

		int cnt = 0;		//超えた秒を分に加算するために定義します

		sec += tmp;			//経過時間をデータメンバに反映させます

		//分が定義されているので 60秒になれば 0秒に変換され

		min += cnt;				//超えた秒は分に反映させます
	}

	//メンバ関数 時 分 秒 を調整する
	//仮引数 無し
	//返却値 無し

	void set_time() {

		int cnt = 0;			//共通のカウンタを設けます

		//加算したとき 60秒以上のとき
		if (sec >= SEC) {

			do {
				sec -= SEC;		//1分は60秒です

				cnt++;			//超えた秒は分に換算します

				//60秒以内になれば終了
			} while (sec > SEC - 1);
		}

		min += cnt;				//分に反映させます

		cnt = 0;				//カウンタを0に戻し 分を超えた分をカウントします

		//加算したとき 60分以上のとき
		if (min >= MIN) {

			//1時間の範囲に収まるように調整します
			do {
				min -= MIN;		//1時間は60分です

				cnt++;			//超えた分は時間に換算します

				//60分以内になれば終了
			} while (min > MIN - 1);
		}

		hour += cnt;			//超えた分を時間に反映させます

		cnt = 0;

		//1日の範囲を超えた場合
		if (hour >= HOUR) {

			//1日の範囲に収まるように調整します
			do {

				hour -= HOUR;		//1日は24時間です

				//24時間以内になれば終了
			} while (hour > HOUR - 1);
		}
	}

};

std::ostream& operator << (std::ostream& s,const Time& tmp);
std::istream& operator >> (std::istream& s,Time& tmp);

#endif /* CLASS_H_ */
