#include<iostream> // 入出力のヘッダ
#include<cstdlib> // ランダム関数
#include<ctime> // 現在時刻

using namespace std; // 名前空間の指定

int main() //main文の始まり
{
	srand(time(NULL)); // 乱数の生成

	int x; // 変数の定義
	int n = 0;	// n = 0 で初期化
	int num = rand() % 100; // 0 ～ 99の乱数を生成

	cout << "数当てゲーム開始!!(3回まで挑戦できます)\n"	// コンソールに表示
	<< "0～99の数を当ててください。\n";					// コンソールに表示

	do{													// do文開始
		cout << "いくつかな？ :";					// コンソールに表示
		cin >> x;									// x を読み込む

		if(x > num)									// x が num より大きいならば
			cout << "大きいです。\n";				// コンソールに表示
		else if(x < num)							// x が num より小さいならば
			cout << "小さいです。\n";				// コンソールに表示
		n++;									// n をインクリメント
		if(n==3)								// n = 3 ならば
			goto Exit;							// 強制終了
	}while(num != x);							// num が xではない限りループ

	cout << "正解です。\n";							// コンソールに表示

	Exit:										// 3回間違えたとき
	cout << "失敗しました。";						// コンソールに表示

	return 0;// プログラム終了

}// main文終わり
