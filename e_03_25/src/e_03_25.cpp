/*
演習3-25 数当てゲームの作成 制限回数を設けて、当てられなかった場合正解を表示します

作成日 2017年5月5日

作成者 平澤敬介
 */

#include<iostream>

// ランダム関数を定義しているライブラリ
#include<cstdlib>

 // 現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

int main()
{
	//現在時刻で乱数を生成します
	srand(time(NULL));

	int answer;				//キーボードから数値を入力し数字を当てます そのために変数を設けます
	int cnt = 0;			//数字を入力した回数をカウントします カウントに使う変数
	int num = rand() % 100;	//乱数を 0から99の間で発生させます


	// 数当てを何回までに当てなけれならないのか
	cout << "数当てゲーム開始!!(3回まで挑戦できます)\n"

			// その範囲の値を表示させます
			<< "0～99の数を当ててください。\n";

	// 数を当てるか、3回失敗するかでループを抜けます
	do{
		//数値を入力するように促します
		cout << "いくつかな？ :";

		// キーボードからの値answerを代入します
		cin >> answer;

		// 比較して入力した値が大きい場合の処理を実行します
		if(answer > num) {

			//ヒント を出します 大きいです
			cout << "大きいです。\n";

		// 比較して入力した値が小さい場合の処理を実行します
		} else if(answer < num) {

			//ヒント を出します 小さいです
			cout << "小さいです。\n";
		}

		// 失敗しても成功しても回数をカウントします
		cnt++;

		// 入力した回数が3回を超えたなら処理を実行します
		if(cnt >= 3) {

			// do while 文から抜け出します
			break;
		}

	// 入力し値が異なる場合、do文の初めに戻ります
	}while(num != answer);

	// ループから抜け出したとき答えが同じときの処理を実行します
	if(num == answer) {

		// 正解です 答えの表示は行いません
		cout << "正解です。\n";

	// それ以外ならばの処理を実行します
	} else {

		// 失敗です 答えの表示を行います
		cout << "失敗しました。\n";

		// 答えを表示します 。
		cout << "答えは " << num << "です。";
	}

	return 0;

}
