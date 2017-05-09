/*
 演習10-1 名前 身長 体重 をメンバとして持つ 人間クラスを定義せよ

 作成日 2017年5月9日

 作成者 平澤敬介
 */

#include<string>
#include"class.h"

//コンストラクタ
HumaN::HumaN(std::string name_,float weight_ ,float height_)
{
	name = name_;			//クラスオブジェクトで初期化された値を
	weight = weight_;		//それぞれのデータメンバに代入します
	height = height_;		//
}

void HumaN::gain(float diff)
{
	weight += diff;			//main から増えた分の体重を反映させます
}

void HumaN::lose(float diff)
{
	weight -= diff;			//main から痩せた分の体重を反映させます
}
