/*
演習11-6 演習10－1で作成した人間クラスに誕生日を格納するデータメンバ、それを返却するメンバ関数を作成せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include<string>

// 自作人間クラス
#include"class.h"

using namespace std;

//関数の宣言
void arrow(HumaN* p);

int main() {
	// 人間クラス 簡易版

	string* name = new string;			//名前を書くための紙を用意します
	float* weight = new float;			//その紙に自分の体重を書く項目を用意します
	float* height = new float;			//その下に身長を書く項目を用意して準備完了です
	float plus, minus;					//体重の増減を表現するために宣言します

	//変更点 Date型オブジェクト で誕生日を作成します
	Date birth(1990,10,11);

	//イニシャルルを入力して下さい
	cout << "名前 : ";

	//紙に名前を書いてください
	cin >> *name;

	//その隣の項目は体重です
	cout << "体重 [kg]: ";

	//隣に体重を書いてください [kg]
	cin >> *weight;

	//その隣の項目は身長です
	cout << "身長 [cm]: ";

	//隣に身長を書いてください [cm]
	cin >> *height;

	//変更点 Date型オブジェクトを追加しました
	HumaN Keisuke(*name, *weight, *height,birth);		//	これまで紙に書いてもらった情報を1つにまとめます

	//宣言 個人情報を表示
	cout << " 名前  体重  身長\n";

	//クラスのメンバ関数を簡潔に呼び出します
	arrow(&Keisuke);

	cout << "誕生日 : ";

	//変更点 メンバ関数で表示を行います
	cout << Keisuke.opening_date();

	//あれから痩せました？
	cout << "減量しました？";

	//どれくらい痩せました？
	cin >> minus;

	//今、何kgですか？
	Keisuke.lose(minus);

	//宣言 個人情報を表示
	cout << " 名前  体重  身長\n";

	//体重以外変わりないようですね
	arrow(&Keisuke);

	//いや、太りましたか？
	cout << "増量しました？";

	//どれくらい太りました？
	cin >> plus;

	//今、何kgですか？
	Keisuke.gain(plus);

	//宣言 個人情報を表示
	cout << " 名前  体重  身長\n";

	//気を付けましょう
	arrow(&Keisuke);

	return 0;
}

//関数 クラスのメンバ関数を簡潔に呼び出す
//仮引数 クラスオブジェクトのポインタ
//返却値 無し

void arrow(HumaN* p)
{
	//クラスオブジェクトのポインタで、クラス内部のメンバ関数を簡潔に呼び出せます
	cout << " " << p->full_name() << "   " << p->how_weight() << "   " << (*p).how_height()
			<< "\n";
}
