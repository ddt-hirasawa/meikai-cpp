
#include<iostream>

using namespace std;

int main()
{

	int sample;// 変数 sample を キーボードから整数を読み込み必ず絶対値にして表示する

	// 変数 n にキーボードから値を読み込む部分 負の値でも可能
	cout << "整数値 : ";
	// cin により 変数 sampleに値を代入します
	cin >> sample;

	// 仮に －10が代入されたのならば sample に-1をかけ 10にする
	if(sample < 0) {
		sample *= -1;
	}

	// 正の値の場合 if文は スルーされ 負の値は if文を通過する
	cout << "その絶対値は" << sample << "です。";

	return 0;
}
