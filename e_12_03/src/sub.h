
/*
演習12-3 演習11-3で作成した時刻クラスに各種の演算子関数を追加せよ

作成日 2017年5月11日

作成者 平澤敬介
*/


#ifndef SUB_H_
#define SUB_H_

#include<iostream>

class Date{
public:
	int y1;		//データメンバの年
	int m1;		//データメンバの月
	int d1;		//データメンバの日

public:

	//デフォルトコンストラクタ
	Date();
	//コンストラクタ
	Date(int y2,int m2 = 1,int d2 = 1)
	{
		y1 = y2;		//クラスオブジェクトが初期化されたときの値を代入する
		m1 = m2;		//クラスオブジェクトが初期化されたときの値を代入する
		d1 = d2;		//クラスオブジェクトが初期化されたときの値を代入する
	}

	//メンバ関数 データメンバの年を返却します
	//仮引数 無し
	//返却値 データメンバの年

	int year() const {

		return y1;
	}

	//メンバ関数 データメンバの月を返却します
	//仮引数 無し
	//返却値 データメンバの月

	int month() const {

		return m1;
	}

	//メンバ関数 データメンバの日を返却します
	//仮引数 無し
	//返却値 データメンバの日

	int day() const {

		return d1;
	}
};

//挿入子
std::ostream& operator << (std::ostream& s,const Date& tmp)
{
	// 呼び出されたら、誕生日を表示します
	return s << "誕生日 : " << tmp.year() << "年" << tmp.month() << "月" << tmp.day() << "日\n";
}
//抽出子
std::istream& operator >> (std::istream& s,Date& tmp)
{
	//誕生日を設定します
	std::cout << "誕生日\n";
	//過ぎているのなら来年以降を入力
	std::cout << "年 : ";
	//データメンバの年 -> y1 に代入
	s >> tmp.y1;
	//過ぎているのなら来年以降を入力
	std::cout << "月 : ";
	//データメンバの月 -> m1 に代入
	s >> tmp.m1;
	//過ぎているのなら来年以降を入力
	std::cout << "日 : ";
	//データメンバの日 -> d1 に代入
	s >> tmp.d1;

	//反映させます
	return s;
}


#endif /* SUB_H_ */
