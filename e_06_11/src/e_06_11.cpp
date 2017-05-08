/* 演習6-11 List 6－11を拡張して
 //	x + y + z
 //  x + y - x
 //  x - y + z
 //  x - y - x
 //の問題をランダムに出題するようにする
 //
 作成日 2017年5月7日

 作成者 平澤敬介
 */

#include<iostream>
// ランダム関数を定義していsるライブラリ
#include<cstdlib>
// 現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

// 続行の確認を行う関数の宣言
bool confirm_retry();

int main() {
	// 宣言 電卓を使うな
	cout << "暗算トレーニング開始!!\n";

	// 現在時刻を使って乱数の種を生成する
	srand(time(NULL));

	//
	do {
		int i = rand() % 4; // パターン決め用 switch文で使う
		int x = rand() % 900 + 100; //do文のループごとに異なる値を表示するため
		int y = rand() % 900 + 100; //毎回乱数を発生させる
		int z = rand() % 900 + 100; //

		// 発生した0 ～ 3　の乱数でそれぞれの演算に向かう正解ならばswitch文から
		// 抜け出せる
		switch (i) {
		// x+y+z の演算を行う部分
		case (0):
			// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
			while (true) {

				int answer;		// 答えを入力する変数を定義する

				// 暗算する式を表示する
				cout << x << " + " << y << " + " << z << " = ";

				// 答えを入力する部分
				cin >> answer;

				// 正解のとき ループから抜け出せる
				if (answer == x + y + z) {

					// 正解のときのみ
					break;
				}

				// 暗算間違い やり直し
				cout << "\a違います!!\n";
			}

			// 暗算がひとまず終了
			break;

			// x+y-z の演算を行う部分
		case (1):
			// 実質無限ループ break文で抜け出さなければ延々と入力を求められる

			while (true) {
				int answer;		// 答えを入力する変数を定義する

				// 暗算する式を表示する
				cout << x << " + " << y << " - " << z << " = ";

				// 答えを入力する部分
				cin >> answer;
				// 正解のとき ループから抜け出せる
				if (answer == x + y - z) {

					//正解のときのみ
					break;
				}

				// 暗算間違い やり直し
				cout << "\a違います!!\n";
			}
			// 暗算がひとまず終了
			break;

			// x-y+z の演算を行う部分
		case (2):
			// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
			while (true) {

				int answer;		// 答えを入力する変数を定義する

				// 暗算する式を表示する
				cout << x << " - " << y << " + " << z << " = ";

				// 答えを入力する部分
				cin >> answer;

				// 正解のとき ループから抜け出せる
				if (answer == x - y + z) {

					// 正解のときのみ
					break;
				}
				// 暗算間違い やり直し
				cout << "\a違います!!\n";
			}
			// 暗算がひとまず終了
			break;

			// x-y-z の演算を行う部分
		case (3):
			// 実質無限ループ break文で抜け出さなければ延々と入力を求められる
			while (true) {

				int answer;			// 答えを入力する変数を定義する

				// 暗算する式を表示する
				cout << x << " - " << y << " - " << z << " = ";

				// 答えを入力する部分
				cin >> answer;

				// 正解のとき ループから抜け出せる
				if (answer == x - y - z) {

					// 正解のときのみ
					break;
				}
				cout << "\a違います!!\n";
			}
		}
	// ループを継続するか関数で判断する
	}while (confirm_retry());

	return 0;
}

//続行の確認を行う関数
//仮引数無し
//返却値 bool型の true false true -> 1 ならば暗算を継続することになる

bool confirm_retry() {

	int retry;	// 変数の定義 1 か 0 が代入される

	// 1 か 0 が代入されるまで続けるループ
	do {
		// 1 か 0 を入力するように促す部分
		cout << "もう一度?<Yes・・・1/No・・・0> :";

		// キーボードからの値を代入する
		cin >> retry;
	// 1 か 0 が入力されたときdo文から抜け出せる
	} while (retry != 0 && retry != 1);

	// 返却するのは true か false のみ true　ならば振出しに戻ります
	return static_cast<bool>(retry);
}
