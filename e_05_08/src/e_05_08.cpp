/*
演習5-8 ランダムに配列の要素を代入し表示する その後、配列をランダムにシャッフルし表示を行う

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

//ランダム関数を使うためののライブラリ
#include<cstdlib>

//	現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

int main()
{
	// 現在時刻で乱数の種を生成します
	srand(time(NULL));

	const int max = 10;
	int nRandom[max];	// 配列を定義し乱数で埋め尽くします

	//要素分乱数を代入するためループします
	for(int i=0; i < max; i++) {

		// 配列を乱数で埋め尽くします
		nRandom[i] = rand() % 100;

		// シャッフル前の配列を表示し比較します
		cout << "nRandom[" << i << "] = " << nRandom[i] << "\n";
	}

	// シャッフルを行う宣言
	cout << "シャッフル\n";

	// シャッフルを行うため要素分ループします
	for(int i=0; i <= max; i++) {

		int Rand = rand() % max;				// 配列の要素数を上限とした乱数を発生させます
		int set = nRandom[Rand];				//配列の値を一時的に保管します
		nRandom[Rand] = nRandom[max-Rand-1];	//乱数で発生した番号で入れ替えを行います
		nRandom[max-Rand-1] = set;				//保管していた値を代入します
	}

	//シャッフル後を表示するためループします
	for(int i=0; i < max; i++) {

		// シャッフル後の配列を表示し比較します
		cout << "nRandom[" << i << "] = " << nRandom[i] << "\n";
	}

	return 0;
}
