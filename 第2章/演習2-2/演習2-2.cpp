
#include<iostream>

using namespace std;

int main()
{

	int sample;	// 変数 sample を 定義 値となる 0 正の値 負の値 をif文で判断され
				// 対応した表示を行う処理

	// sample の値を決める部分 整数であれば どの値でも対応する
	cout << "整数値 : ";
	// sample にキーボードからの値を代入する
	cin >> sample;

		// 仮に n = 1ならば 正 と表示される
	if(sample > 0) {
		// 正の値のときの表示を行う
		cout << "その値は正です。\n";
		// 仮に n = ‐1ならば 負 と表示される
	} else if(sample < 0) {
		// 負の値のときの表示を行う
		cout << "その値は負です。\n";
		// n = 0のときのみ、 0と表示される ここは else に書き換えても良い
	} else if(sample == 0) {
		// 値が 0 のときの表示を行う
		cout << "その値は0です。\n";
	}

	return 0;
}
// 同じ動作をします。
