/*
演習2-15 おみくじプログラムの作成

作成日 2017年5月4日

作成者 平澤敬介
*/

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


	int n = rand() % 7;// 乱数 0～ 6の間で発生指せる

	// 単なる宣言 0～6の数値で switch文に入る
	cout << "おみくじプログラム\n";
	// n の値でswitchする if文でも代用できるが長文になってしまう
	switch(n){
	// 大吉を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(0) : cout << "大吉\n"; break;
	// 忠吉を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(1) : cout << "中吉\n"; break;
	// 小吉を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(2) : cout << "小吉\n"; break;
	// 吉を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(3) : cout << "吉\n"; break;
	// 末吉を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(4) : cout << "末吉\n"; break;
	// 凶を表示する部分 表示されたら break文に向かうため同時にほかの case が表示されはしない
	case(5) : cout << "凶\n"; break;
	// 大凶を表示する部分 表示されたら switch文からでてしまう
	default : cout << "大凶\n"; //break;
	}

	return 0;
}
