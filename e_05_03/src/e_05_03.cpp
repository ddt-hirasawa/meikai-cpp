/*
演習 5-3 int型で要素数6の配列に 1から10の乱数を代入する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

//ランダム関数を使うためののライブラリ
#include<cstdlib>

//	現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

int main() {

	int nTest[6]; //	nTest[0]～a[5] までの6要素を初期化せずに定義する

	// 現在時刻で乱数の種を生成する
	srand(time(NULL));

	// 要素数分 乱数を生成し 表示を行うため ループ処理を行う
	for (int i = 0; i < 6; i++) {

		// この部分では 0から9の乱数になっている ループごとにランダム関数を呼び出している
		nTest[i] = rand() % 10;

		// 配列の値をインクリメントしている ここで1～10の乱数になる乱数ではあるが数字は重複する
		nTest[i]++;

		//乱数を要素数分表示していく部分 乱数ではあるが重複してしまう
		cout << "nTest[" << i << "] = " << nTest[i] << "\n";
	}

	return 0;
}
