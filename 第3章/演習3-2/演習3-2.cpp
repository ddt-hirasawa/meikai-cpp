/*
演習3-2 数当てゲーム 10～99　当てるまで繰り返す

作成日 2017年5月4日

作成者 平澤敬介
*/
#include<iostream>

//ランダム関数が定義されているライブラリ
#include<cstdlib>
// 現在時刻が定義されているライブラリ
#include<ctime>

using namespace std;

int main()
{
	// 乱数の種をを現在時刻の情報を素に生成
	srand(time(NULL));

	int answer;					// 変数の定義	この変数に値を代入して判別する
	int num = 10+rand() % 90;//10～99 の値で初期化	　これが都度の答えになる

	// 単なる宣言　数当てゲーム開始 これ以降ループに入る
	cout << "数当てゲーム開始!!\n" << "10～99の数を当ててください。\n";

	// do文開始
	do{
		// 入力をする部分 失敗すると また戻ってくる
		cout << "いくつかな？ :";

		cin >> answer;

		// ヒント 入力した値は 大きかった
		if(answer > num) {
			cout << "大きいです。\n";
		// ヒント 入力した値は 小さかった
		} else if(answer < num) {
			cout << "小さいです。\n";
		}

	// 正解を当てるまで何度でも繰り返す 何度でも・・・
	}while(num != answer);

	// 正解を当てた時のみ表示される 当てないとループから永遠にでれない
	cout << "正解です。\n";

	return 0;
}
