// 演習6-11 List 6－11を拡張して
//	x + y + z
//  x + y - x
//  x - y + z
//  x - y - x
//の問題をランダムに出題するようにする
//

#include<iostream>
// ランダム関数を定義していsるライブラリ
#include<cstdlib>
// 現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

// 続行の確認を行う関数の宣言
bool confirm_retry();

int main()
{

	cout << "暗算トレーニング開始!!\n";
	// 現在時刻を使って乱数の種を生成する
	srand(time(NULL));

	do{
		int i = rand() % 4; // パターン決め用 switch文で使う
		int x = rand() % 900 + 100;//do文のループごとに異なる値を表示するため
		int y = rand() % 900 + 100;//毎回乱数を発生させる
		int z = rand() % 900 + 100;//

		// 発生した0 ～ 3　の乱数でそれぞれの演算に向かう正解ならばswitch文から
		// 抜け出せる
		switch(i){
		// x+y+z の演算を行う部分
		case(0) :
		// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
		while(true){
			int k;		// 答えを入力する変数を定義する
			cout << x << " + " << y << " + " << z << " = ";
			cin >> k;
			// 正解のとき ループから抜け出せる
			if(k == x + y + z) break;
			cout << "\a違います!!\n";
		}
		break;
		// x+y-z の演算を行う部分
		case(1) :
		// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
		while(true){
			int k;		// 答えを入力する変数を定義する
			cout << x << " + " << y << " - " << z << " = ";
			cin >> k;
			// 正解のとき ループから抜け出せる
			if(k == x + y - z)
				break;
			cout << "\a違います!!\n";
		}
		break;

		// x-y+z の演算を行う部分
		case(2) :
		// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
		while(true){
			int k;		// 答えを入力する変数を定義する
			cout << x << " - " << y << " + " << z << " = ";
			cin >> k;
			// 正解のとき ループから抜け出せる
			if(k == x - y + z)
				break;
			cout << "\a違います!!\n";
		}
		break;

		// x-y-z の演算を行う部分
		case(3) :
		// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
		while(true){
			int k;			// 答えを入力する変数を定義する
			cout << x << " - " << y << " - " << z << " = ";
			cin >> k;
			// 正解のとき ループから抜け出せる
			if(k == x - y - z)
				break;
			cout << "\a違います!!\n";
		}
		}
			}while(confirm_retry());

	return 0;
}

//続行の確認を行う関数
bool confirm_retry()
{
	int retry;
	do{
		cout << "もう一度?<Yes・・・1/No・・・0> :";
		cin >> retry;
		// 1 か 0 が入力されたときdo文から抜け出せる
	}while(retry != 0 && retry != 1);
	// 返却するのは true か false のみ true　ならば振出しに戻ります
	return static_cast<bool>(retry);
}
