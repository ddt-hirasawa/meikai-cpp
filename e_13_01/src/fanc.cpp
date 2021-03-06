/*
 演習13-1 日付クラス にテキストで指示している演算子関数を追加しなさい

 1.2つの日付が正しいかどうかの等価演算子 ==			OK
 2.2つの日付がことなっているかどうかの等価演算子 !=	OK
 3.2つの日付の大小を判定する関係演算子 > >= < <=     OK
 4.2つの日付の減算を行う減算演算子 -				OK
 5.日付を翌日に更新する増分演算子 ＋＋				OK
 6.日付を昨日に更新する増分演算子 --				OK
 7.日付をn日進めた日付に更新する複合代入演算子 +=	OK
 8.日付をn日戻した日付に更新する複合代入演算子 -=	OK
 9.日付のn日後の日付を求める加減演算子 +			OK
 10.日付のn日前の日付を求める加減演算子 -			OK

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#include"class.h"
#include<iostream>
#include<sstream>
#include<ctime>

using namespace std;

// 引数として与えた y m で日数を返却する部分
int date::days_of_month(int y,int m)
{
	// その年がうるう年でなければ 配列にある値がそのまま返却される
	// + の後ろは うるう年の2月のときのみ 1 になる
	return dmax[m-1] + (date::leap_year(y) && m == 2);
}

// デフォルトコンストラクタ 現在時刻を与える部分
date::date()
{
	//現在 PCの時刻を変数 current に与える
	time_t current = time(NULL);
	// ポインタで現在時刻のアドレスをそれぞれの項目のデータメンバに与える
	struct tm* local = localtime(&current);
	// dateのデータメンバに西暦を代入する
	y = local->tm_year + 1900;
	// dateのデータメンバに月を代入する
	m = local->tm_mon + 1;
	// dateのデータメンバに日を代入する
	d = local->tm_mday;
}

// コンストラクタ 時刻を代入する部分
date::date(int yy,int mm=0,int dd=0)
{
	y = yy;		// main でオブジェクトが初期化せれたとき 1つ目の値を データメンバの 西暦に与える
	m = mm;		// main でオブジェクトが初期化せれたとき 2つ目の値を データメンバの 月に与える
	d = dd;		// main でオブジェクトが初期化せれたとき 3つ目の値を データメンバの 日に与える
}

//元旦から何日経過したのか返却する関数
int date::day_of_year() const
{
	int tmp = d;// 現在の月の経過した日数を変数に補完する
	// 前の月までの日数の合計を出すためにループ処理を行う
	for(int i=1; i < m; i++) {
		// 現在の月の経過日数で初期化された変数に
		//これまでの月の日数を加算していく
		tmp += days_of_month(y,i);
	}
	//for文の処理が終われば合計の値はこれまでの経過日数になっているので返却する
	return tmp;
}

// 曜日を返却する関数 0～6まででへ返却され 日曜日から 土曜日に該当する
int date::day_of_week() const
{
	int year = y;	//データメンバの西暦を演算に使うため変数に保存する
	int month = m;	//データメンバの月を演算に使うため変数に保存する

	// 1月か2月なら、演算の前に値を操作する必要がある
	if(month == 1|| month == 2){
		// 西暦をデクリメントする必要がある
		year--;
		// 今の月に12を加えた値が必要になる
		month += 12;
	}
	//	ツェラーの公式によって出される値を返却する
	return (year + year / 4 - year /100 + year /400 + (13 * m + 8) /5 + d ) % 7;
}

// 1日前にする関数
date date::past() const
{
	date tmp = *this;	//date のオブジェクトを thisポインタで現在時刻を代入
	// 現在時刻が2日以上ならば
	if(tmp.d > 1){
		//1日前にデクリメントすればいい
		tmp.d--;
	// 現在時刻が1日ならば
	}else{
		//仮に1月1日ならば
		if(--tmp.d < 1){
			// 前の年の
			tmp.y--;
			// 12月になるように代入を行う
			tmp.m = 12;
		}
	// データメンバに前月の末日を代入する
	tmp.d = days_of_month(tmp.y,tmp.m);
	}
	// 保存されているオブジェクトはデータメンバが更新されているので
	// 表示させると昨日の日付になる
	return tmp;
}

// 1日後にする関数
date date::future() const
{
	date tmp = *this;	//date のオブジェクトを thisポインタで現在時刻を代入

	//現在時刻が末日の前の日以降ならば
	if(tmp.d < days_of_month(tmp.y,tmp.m))
		//日付を進める
		tmp.d++;
	// 現在時刻が末日ならば
	else{
		//仮に12月31日ならば
		if(++tmp.m > 12){
			//来年の
			tmp.y++;
			//1月
			tmp.m = 1;
		}
		//1日にする
		tmp.d = 1;
	}
	// 保存されているオブジェクトはデータメンバが更新されているので
	// 表示させると明日の日付になる
	return tmp;
}

// 文字列表現を返却する関数
string date::to_string() const
{
	// 文字列への表示を行うためのストリーム
	ostringstream s;
	// s 以降を文字列として返却する
	s << y << "年" << m << "月" << d << "日";
	// string型の文字列を返却する
	return s.str();
}

// 挿入子
ostream& operator << (ostream& s,const date& x)
{
	// 関数で得た文字列を返却する
	return s << x.to_string();
}
// 抽出子
istream& operator >> (istream& s,date& x)
{
	//再入力で頻繁に呼び出す部分
	//比較したい月を都度変えて入力
	std::cout << "西暦 : ";
	//1990年
	s >> x.y;
	//month
	std::cout << "月 : ";
	//データメンバに与える
	s >> x.m;
	//日は31日が限度
	std::cout << "日 : ";
	//データメンバに与える
	s >> x.d;

	//得た値を反映させる
	return s;
}
