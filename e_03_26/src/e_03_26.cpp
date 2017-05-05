/*
演習3-26 じゃんけんプログラムの作成

作成日 2017年5月5日

作成者 平澤敬介
*/

#include<iostream>

	// 現在時刻を定義しているライブラリ
#include<ctime>

 // ランダム関数を定義しているライブラリ
#include<cstdlib>

using namespace std;


int main()
{
	int mine;	//	 自分の手
	int com;	//	 相手の手
	int mycnt = 0; // 	自分の勝利回数
	int comcnt = 0; //	相手の勝利回数

	// ゲーム開始
	do {
		// 自分の手を決める部分
		do {
			// 0～2の間で入力を受けつけます
			cout << "入力してください\n"
					<< "グー・・・0 チョキ・・・1 パー・・・2\n";
			// キーボードからの値をmineに代入します
			cin >> mine;

			//グー チョキ パーいずれでもなければ
			if (mine < 0 || mine > 2) {
				//入力ミス扱いにしてやり直し
				cout << "入力ミス\n";
			}
			// グー チョキ パーが入力されたのならば終了します
		} while (mine < 0 || mine > 2);

		// 自分の手を表示する部分
		switch (mine) {
		// mine = 0のとき
		case (0):
			// グーを出しました
			cout << "自分 : グー\n";
			// switchから抜けます
			break;

		// mine = 1のとき
		case (1):
			// チョキを出しました
			cout << "自分 : チョキ\n";
		// switchから抜けます
			break;

		// mine = 2のとき
		case (2):

			// パーを出しました
			cout << "自分 : パー\n";
		// switchから抜けます
			break;
		}
		// 乱数の生成
		srand(time(NULL));


		com = rand() % 3; 	// 相手の手を乱数で決めます

		// com の 値で グー チョキ パー を決めます
		switch (com) {

		// com = 0 のとき
		case (0):
			// グーを出しました
			cout << "COM : グー\n";
		// switchから抜けます
			break;

		// com = 1 のとき
		case (1):
			// チョキを出しました
			cout << "COM : チョキ\n";
		// switchから抜けます
			break;

		// com = 2 のとき
		case (2):
			// パーを出しました
			cout << "COM : パー\n";
		// switchから抜けます
			break;
		}

		// 自分がグーのとき
		if (mine == 0) {

			// com の値で caseに向かう
			switch (com) {

			// 相手はグーです
			case (0):

				// 両方のカウントを行いません
				cout << "引き分けです\n";
			// switchから抜けます
				break;

			// 相手はチョキです
			case (1):

				// 勝ったので自分のカウントを行います
				cout << "勝ちです\n";

				// 自分のカウントをインクリメント
				mycnt++;
				// switchから抜けます
				break;

			// 相手はパーです
			case (2):

				//負けたので相手のカウントを行います
				cout << "負けです\n";

				//相手のカウントをインクリメント
				comcnt++;
				// switchから抜けます
				break;
			}
		}

		// 自分がチョキのとき
		if (mine == 1) {

			// com の値で caseに向かう
			switch (com) {

			// 相手はグーです
			case (0):

				//負けたので相手のカウントを行います
				cout << "負けです\n";

				//相手のカウントをインクリメント
				comcnt++;
				// switchから抜けます
				break;		// c をインクリメント

			// 相手はチョキです
			case (1):

			// 両方のカウントを行いません
				cout << "引き分けです\n";
			// switchから抜けます
				break;

			// 相手はパーです
			case (2):

				// 勝ったので自分のカウントを行います
				cout << "勝ちです\n";

				// 自分のカウントをインクリメント
				mycnt++;
				// switchから抜けます
				break;
			}
		}

		// 自分がパーのとき
		if (mine == 2) {

			// com の値で caseに向かう
			switch (com) {

			// 相手はグーです
			case (0):

				// 勝ったので自分のカウントを行います
				cout << "勝ちです\n";
				// 自分のカウントをインクリメント
				mycnt++;
				// switchから抜けます
				break;

			// 相手はチョキです
			case (1):

				//負けたので相手のカウントを行います
				cout << "負けです\n";

				//相手のカウントをインクリメント
				comcnt++;
				// switchから抜けます
				break;

			// 相手はパーです
			case (2):

				// 両方のカウントを行いません
				cout << "	引き分けです\n";
			// switchから抜けます
				break;
			}
		}
		// 勝利回数を表示	自分とCOMの勝った回数を表示していく
		cout << "YOU :" << mycnt << "回\n" << "COM :" << comcnt << "回\n";

		// 自分か相手が３回勝つまでループ
	} while (mycnt < 3 && comcnt < 3);


	// 自分が３回勝ったなら
	if (mycnt >= 3)

		// 自分の勝ち
		cout << "YOU_WIN\n";
	// 3回勝ってないのに終了したら
	else
		// 自分の負け
		cout << "YOU_LOSE\n";

	return 0;

}
