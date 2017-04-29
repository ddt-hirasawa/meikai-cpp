#include<iostream> // 入出力のヘッダ

using namespace std; // 名前空間の指定

int main() //main文の始まり
{
	int n;			// 変数の定義
	cout << "整数を加算しますか。\n";	//コンソールに表示
	cout << "何個加算しますか :";	//コンソールに表示
	cin >> n;						// n の読み込み

	int sum=0;					// sum を0で初期化
	int ave=0;					// ave を0で初期化
	int tmp = 0;					// tmp を0で初期化
	for(int i=0;i<n;i++){				// iループ
		int t;					// 変数の定義
		cout << "整数 :";						//コンソールに表示
		cin >> t;				// t の読み込み
		if(t < 0){				// t が負の値のとき
			cout << "\a負の数は加算しません。\n";	//コンソールに表示
		continue;						// ループから出る
	}								// if文終わり
		tmp++;				// tmp をインクリメント
		sum += t;			// sum にtを加える
	}						// iループ終わり
	ave = sum / tmp;		// 平均を出す
	cout << "合計は" << sum << "です。\n";	// 合計を表示
	cout << "平均は" << ave << "です。\n";	// 平均を表示
	return 0;					// プログラム終了
}// main文の終わり
