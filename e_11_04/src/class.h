/*
演習11-4 コンストラクタ初期化子によって明示的に初期化しない場合、メンバ部分オブジェクトが
デフォルトコンストラクタで初期化されることを確認せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include"Date.h"

class Account{
	std::string full_name;	//名前
	std::string number;		//その人の個人番号
	long balance;			//貯金
	Date open;				//開設日

public:
	//デフォルトコンストラクタ
	Account();
	//コンストラクタ
	Account(std::string name,std::string num,long amnt,int y,int m=1,int d=1);

	//関数の宣言
	void deposit(long tmp);
	void with(long amnt);

	//メンバ関数 名前を返却します
	//仮引数 無し
	//返却値 データメンバ 名前

	std::string name() const {

		return full_name;
	}

	//メンバ関数 個人番号を返却します
	//仮引数 無し
	//返却値 データメンバ 個人番号

	std::string no() const {

		return number;
	}

	//メンバ関数 貯金を返却します
	//仮引数 無し
	//返却値 データメンバ 貯金

	long bal() const {

		return balance;
	}

	//メンバ関数 誕生日を返却します
	//仮引数 無し
	//返却値 データメンバ 誕生日

	Date openDate() const {

		return open;
	}

};

//抽出子
std::istream& operator>>(std::istream& s,Account& x);

#endif /* CLASS_H_ */
