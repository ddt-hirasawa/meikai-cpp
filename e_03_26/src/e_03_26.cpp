#include<iostream> // 入出力のヘッダ	3回勝たなければ終了しません
#include<ctime>	// 現在時刻
#include<cstdlib> // ランダム関数

using namespace std;// 名前空間の指定

int main()// main文の始まり
{
	int mine;	// 自分の手
	int com;	// 相手の手
	int m = 0; // 自分の勝利回数
	int c = 0; //相手の勝利回数
	do{
	do{
		cout << "入力してください\n"					//コンソールに表示
		<< "グー・・・0 チョキ・・・1 パー・・・2\n";	//コンソールに表示
		cin >> mine; 									// 自分の手
		if(mine < 0 || mine > 2)						// 0～２の間でなければ
			cout << "入力ミス\n";						//コンソールに表示
	}while(mine < 0 || mine > 2);						// 0～２の間で入力されるまで

	switch(mine){										// mine の 値で caseに向かう
	case(0) : cout << "自分 : グー\n"; break;			// mine = 0のとき
	case(1) : cout << "自分 : チョキ\n"; break;		// mine = 1のとき
	case(2) : cout << "自分 : パー\n"; break;			// mine = 2のとき
	}													// switch文終わり

	srand(time(NULL));					// 乱数の生成
	com = rand() % 3; 					// 相手の手
	switch(com){										// com の 値で caseに向かう
	case(0) : cout << "COM : グー\n"; break;			// com = 0 のとき
	case(1) : cout << "COM : チョキ\n"; break;			// com = 1 のとき
	case(2) : cout << "COM : パー\n"; break;			// com = 2 のとき
	}													// switch文終わり

	if(mine == 0){										// 自分がグーのとき
		switch(com){									// com の値で caseに向かう
		case(0) : cout << "引き分けです\n"; break;		// 引き分け
		case(1) : cout << "勝ちです\n";m++; break;		// m をインクリメント
		case(2) : cout << "	負けです\n";c++; break;		// c をインクリメント
		}													// switch文終わり
	}
	if(mine == 1){										// 自分がチョキのとき
		switch(com){									// com の値で caseに向かう
		case(0) : cout << "負けです\n";c++; break;		// c をインクリメント
		case(1) : cout << "引き分けです\n"; break;			// 引き分け
		case(2) : cout << "	勝ちです\n";m++; break;		// m をインクリメント
		}													// switch文終わり
	}
	if(mine == 2){										// 自分がパーのとき
		switch(com){									// com の値で caseに向かう
		case(0) : cout << "勝ちです\n";m++; break;		// m をインクリメント
		case(1) : cout << "負けです\n";c++; break;		// c をインクリメント
		case(2) : cout << "	引き分けです\n"; break;			// 引き分け
		}													// switch文終わり
	}
	cout << "YOU :" << m << "回\n"<< "COM :" << c << "回\n"; // 勝利回数を表示
	}while(m < 3 && c < 3);							// 自分か相手が３回勝つまでループ

	if(m == 3)										// 自分が３回勝ったなら
		cout << "YOU_WIN\n";						// 自分の勝ち
	else											// 違うのならば
		cout << "YOU_LOSE\n";						// 自分の負け


	return 0;		// プログラム終了
} // main文終わり
