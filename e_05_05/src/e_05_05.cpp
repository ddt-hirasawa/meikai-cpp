/*
演習5-4 配列の要素をすべて異なる値で格納する

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

	int nRandom[20];	//重複しない乱数を代入する配列を定義します

	// 要素数分に乱数を発生させます。
	for(int i=0; i < 20; i++) {
		// 0 ～ 29 の乱数で配列を埋め尽くします この時点では重複有り
		nRandom[i] = rand() % 20;
	}

	// 重複していないか確認するため要素分ループ処理を行います
	for(int i=0; i < 20; i++) {

		// すべての要素を比較するため、ループの中でループを行います
		for(int j=0; j < 20; j++) {

			//比較するしていく中で同じ要素があった場合 ただし、同じ配列を見ているときは無視します
			if(nRandom[i] == nRandom[j] && i != j) {
				do{
				// もう一度乱数を発生させます。
				nRandom[j] = rand() % 20;

				// 同じ限り乱数を発生させるため最初に戻ります
				}while(nRandom[i] == nRandom[j]);

				// if文を抜けるとき、最初の配列から見直すようにします
				i = 0;
			}
		}
	}

	// 重複している部分を取り除けたか確認するため、ループして要素をすべて表示させます
	for(int i=0; i < 20; i++) {
		//1つずつ配列の要素を表示し改行します
		cout << "nRandom[" << i << "] = " << nRandom[i] << "\n";
	}

	return 0;
}