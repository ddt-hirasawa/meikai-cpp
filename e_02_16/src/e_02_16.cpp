/*
演習2-16 switch文で月を季節に変換する処理

作成日 2017年5月4日

作成者 平澤敬介
*/
#include<iostream>

using namespace std;

int main()
{
	int nselect;	// 整数を読み込み季節を返すための変数を定義する

	//整数を入力するように促す 1から12以外の数字でも構わない
	cout << "1～12の整数を入力してください :";
	//変数nselectにキーボードからの値を代入する
	cin >> nselect;

	// まずは、n月を表示する 後に季節が表示されるのであっているか確認できる
	cout << nselect << "月ですね\n";

	// 月の数でswitch文に入る 応じた季節を出力する
	switch(nselect){
	// １月 通過
	case(1) :
	// 1月 2月は冬なので 冬と表示して break switch文から脱出
	case(2) : cout << "冬です\n"; break;
	// ３月 通過
	case(3) :
	// ４月 通過
	case(4) :
	//  3月 4月 5月は春なので 春と表示して break switch文から脱出
	case(5) : cout << "春です\n"; break;
	// ６月 通過
 	case(6) :
	// ７月 通過
	case(7) :
	//  6月 7月 8月は夏なので 夏と表示して break switch文から脱出
	case(8) : cout << "夏です\n"; break;
	// ９月 通過
	case(9) :
	// 1０月 通過
	case(10) :
	//  9月 10月 11月は秋なので 秋と表示して break switch文から脱出
	case(11) : cout << "秋です\n"; break;
	//  12月は冬なので 冬と表示して break switch文から脱出
	case(12) : cout << "冬です\n"; break;
	// 1～12以外の数字が入力された場合、季節を表示せずswitch文から出る
	default : cout << "その月はありません\n"; break;
	}
	return 0;
}
