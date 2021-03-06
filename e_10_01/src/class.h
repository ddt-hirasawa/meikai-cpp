/*
 演習10-1 名前 身長 体重 をメンバとして持つ 人間クラスを定義せよ

 作成日 2017年5月9日

 作成者 平澤敬介
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include<iostream>

class HumaN{

//個人情報
private:
	std::string name;		//名前
	float weight;			//体重
	float height;			//身長

//公開しても構わない部分
public:
	//デフォルトコンストラクタ
	HumaN();
	//コンストラクタ
	HumaN(std::string name_,float weight_ = 0,float height_ = 0);

	//メンバ関数 名前のデータメンバを返却します
	//仮引数 無し
	//返却値 名前のデータメンバ
	std::string full_name() {

		return name;
	}

	//メンバ関数 体重のデータメンバを返却します
	//仮引数 無し
	//返却値 体重のデータメンバ
	float how_weight() {

		return weight;
	}

	//メンバ関数 身長のデータメンバを返却します
	//仮引数 無し
	//返却値 身長のデータメンバ
	float how_height() {

		return height;
	}

	//メンバ関数 太りました
	//仮引数 main から渡される 増えた体重
	//返却値 なし
	void gain(float diff);

	//メンバ関数 痩せました
	//仮引数 main から渡される 減った体重
	//返却値 なし
	void lose(float diff);
};

#endif /* CLASS_H_ */
