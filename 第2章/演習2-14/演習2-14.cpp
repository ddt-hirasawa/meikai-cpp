//演習2-14 0～2の乱数を生成しそれぞれに対応したじゃんけんの手を表示する処理

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

	// 乱数 0～ 2の間で発生
	int n = rand() % 3;

	// 単なる宣言 0～2の数値で switch文に入る
	cout << "じゃんけん　簡易版\n" << "グー : 0 チョキ : 1 パー : 2\n";

	// 変数n の値で case に向かう それぞれで break しているので一緒に表示されはしない。
	switch(n){
	// グーを表示する部分 出力が終われば break文に向かいプログラム終了
	case(0) : cout << "グー\n"; break;
	// チョキを表示する部分 出力が終われば break文に向かいプログラム終了
	case(1) : cout << "チョキ\n"; break;
	// パーを表示する部分 出力が終われば break文に向かいプログラム終了
	case(2) : cout << "パー\n"; break;
	}

	return 0;
}
