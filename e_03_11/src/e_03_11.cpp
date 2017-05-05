/*
演習3-11 整数の和を求めるプログラム List 3-9 をfor文に書き換える

作成日 2017年5月4日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int nMax;		//キーボードからの値で加算する値を決める その値を補完する変数
	int sum = 0;	//合計の変数 ０で　初期化し加算していく

	// 合計を求めるための宣言
	cout << "1からnまでの和を求めます。";

	// nMax が負の値では加算できないので正の値を
	//入力するまで繰り返す
	do{
		// 正の整数値を入力するように促す
		cout << "正の整数値 :";
		// nMaxにキーボードからの値を代入する
		cin >> nMax;
		// 負の値の限り繰り返す
	}while(nMax <= 0);

	// 変更点 while文 から fo文r へ
	// 1 ～ n まで加算されていく
	// while文と違い、1～ｎまで 1ずつ加算された値が
	// sum に加算されていくのがわかりやすくなりました
	for(int i=1;i <= nMax;i++) {
		// for文の制御式でインクリメントされていく i を
		// 合計の変数 sum に加算していく
		sum += i;
	}

	// ｎMaxまでの整数の和を表示する部分
	cout << "1～" << nMax << "までの和は" << sum << "です。";

	return 0;
}
