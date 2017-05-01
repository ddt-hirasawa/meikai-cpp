// 演習6-7 月の季節を返却する関数を作成する

#include<iostream>

using namespace std;

void print_season(int);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	int m;// 月を入力する変数を定義 後の 関数内で 1 ～ 12 の値で季節を返却する

	// 入力と季節の表示を繰り返すためにdo文を使う
	do{
	cout << "1～12の数字を入力してください。\n"
			"対応した季節を出力します。";
	cin >> m;

	cout << "季節は ";

	// 関数呼び出し部分 季節を返却する部分
	print_season(m);

	cout << " です。\n";
	// 9999 が入力されたとき終了する 季節は表示しない
	}while(m != 9999);
	return 0;
}

// 季節を表示する関数 入力された値に対応した季節を表示する
// 値は返却しない
void print_season(int tmp)
{
	switch(tmp){
	case(1) :
	case(2) : cout << "冬"; break;
	case(3) :
	case(4) :
	case(5) : cout << "春"; break;
	case(6) :
	case(7) :
	case(8) : cout << "夏"; break;
	case(9) :
	case(10) :
	case(11) : cout << "秋"; break;
	case(12) : cout << "冬"; break;
	default : break;
	}
}
