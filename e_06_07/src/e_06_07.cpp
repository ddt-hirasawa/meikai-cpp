/*
演習6-7 月の季節を返却する関数を作成する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要

void print_season(int);
int main()
{
	int month;// 月を入力する変数を定義 後の 関数内で 1 ～ 12 の値で季節を返却する

	// 入力と季節の表示を繰り返すためにdo文を使う
	do{

	// 数値の入力を促す部分
	cout << "1～12の数字を入力してください。\n"
	// 範囲の指定はないが 1 ～ 12 以外のときは季節を表示しない
			"対応した季節を出力します。";

	//キーボードからの値を代入する部分
	cin >> month;

	// 宣言 季節を表示する
	cout << "季節は ";

	// 関数呼び出し部分 季節を返却する部分
	print_season(month);

	cout << " です。\n";

	// 9999 が入力されたとき終了する 季節は表示しない
	}while(month != 9999);

	return 0;
}

// 季節を表示する関数 入力された値に対応した季節を表示する値は返却しない
// 仮引数 tmp この数値で該当する季節を表示する
// 返却値 なし

void print_season(int tmp)
{
	// switch文により該当する季節に向かう
	switch(tmp){

	// 通過するだけ
	case(1) :

	// 冬 であることを表示して関数を出る
	case(2) : cout << "冬"; break;

	// 通過するだけ
	case(3) :

	// 通過するだけ
	case(4) :

	// 春 であることを表示して関数を出る
	case(5) : cout << "春"; break;

	// 通過するだけ
	case(6) :

	// 通過するだけ
	case(7) :

	// 夏 であることを表示して関数を出る
	case(8) : cout << "夏"; break;

	// 通過するだけ
	case(9) :

	// 通過するだけ
	case(10) :

	// 秋 であることを表示して関数を出る
	case(11) : cout << "秋"; break;

	// 冬 であることを表示して関数を出る
	case(12) : cout << "冬"; break;

	// 該当しないので 何もしないで関数を出る
	default : break;
	}
}
