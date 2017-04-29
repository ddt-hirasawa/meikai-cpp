//演習2-16 switch文で月を季節に変換する処理

#include<iostream>
// ランダム関数を定義しているライブラリ
#include<cstdlib>
// 現在時刻の情報を持ったライブラリ
#include<ctime>

using namespace std;

int main()
{
	// 現在時刻を使って乱数の種を生成する
	srand(time(NULL));

	// 乱数 0～ 11の間で発生
	int n = rand() % 12;

	// n をインクリメントすることで乱数が 1 ～ 12 の間の乱数になる
	n++;

	// まずは、n月を表示する 後に季節が表示されるのであっているか確認できる
	cout << n << "月\n";

	// 月の数でswitch文に入る 応じた季節を出力する
	switch(n){
	// １月 通過
	case(1) :
	// 1月 2月は冬なので 冬と表示して break switch文から脱出
	case(2) : cout << "冬\n"; break;
	// ３月 通過
	case(3) :
	// ４月 通過
	case(4) :
	//  3月 4月 5月は春なので 春と表示して break switch文から脱出
	case(5) : cout << "春\n"; break;
	// ６月 通過
 	case(6) :
	// ７月 通過
	case(7) :
	//  6月 7月 8月は夏なので 夏と表示して break switch文から脱出
	case(8) : cout << "夏\n"; break;
	// ９月 通過
	case(9) :
	// 1０月 通過
	case(10) :
	//  9月 10月 11月は秋なので 秋と表示して break switch文から脱出
	case(11) : cout << "秋\n"; break;
	//  12月は冬なので 冬と表示して break switch文から脱出
	case(12) : cout << "冬\n"; break;
	}
	return 0;
}
