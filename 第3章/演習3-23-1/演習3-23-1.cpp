/*
演習 3-23-1 List 3-15 を書き換え 平均も出せるようにする

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	// 変更点 平均を出すための変数 ave 加算した回数を数える変数 cnt を追加
	int nMax;		//キーボードからの値で加算する回数を決めるため、変数を作ります
	int sum=0;		//合計を格納する変数 0で初期化します
	int ave=0;		//平均を格納する変数 0で初期化します
	int cnt = 0;	//実際に加算した回数をカウントし平均を出すために使います


	// 整数を加算する回数をキーボードからの値決めます
	cout << "何個加算しますか :";

	//キーボードからの値を変数に代入する
	cin >> nMax;

	//入力された回数加算を行うために処理を繰り返します
	for(int i=0; i < nMax; i++) {

		//sum に加算する値をループごとに定義する
		int tmp;

		//0が入力されたならば合計に加算する処理を終わらせることを伝えます
		cout << "整数 (0で終了) :";

		//加算する数値を入力します
		cin >> tmp;

		//if文で0が入力された場合を検出します
		if(tmp == 0) {
			//for文から抜け出します
			break;
		}

		// 変更点 ０が入力されたときに終了なので 0 は加算する数には含まないものとする
		// そのため if文の後でインクリメントする
		cnt++;
		//合計に加算します
		sum += tmp;
	}

	// 変更点 合計を カウントした回数で割ることによって平均を出している
	// ０　含まれていないのでその前に入力された数字の平均となる
	ave = sum / cnt;

	// 変更点 合計を表示した後に、平均を表示し処理を終わる
	cout << "合計は" << sum << "です。\n" << "平均は" << ave << "です。\n";
	return 0;
}
