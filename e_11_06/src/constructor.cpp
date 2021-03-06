/*
演習11-6 演習10－1で作成した人間クラスに誕生日を格納するデータメンバ、それを返却するメンバ関数を作成せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<string>
#include"class.h"

//コンストラクタ
HumaN::HumaN(std::string name_,float weight_ ,float height_,Date& tmp)
//変更点 Date型のオブジェクトを構築します
	: open(tmp)
{
	name = name_;			//クラスオブジェクトで初期化された値を
	weight = weight_;		//それぞれのデータメンバに代入します
	height = height_;
}

void HumaN::gain(float diff)
{
	weight += diff;			//main から増えた分の体重を反映させます
}

void HumaN::lose(float diff)
{
	weight -= diff;			//main から痩せた分の体重を反映させます
}

//挿入子
std::ostream& operator << (std::ostream& stream, const Date& tmp)
{
	return stream << tmp.year() << "年" << tmp.month() << "月" << tmp.day() << "日\n";
}
