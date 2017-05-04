#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2;// 変数の定義 sample1,sample2それぞれキーボードから読み込むため、初期化する必要なし

	// sample1 に代入する値を決める部分 0 正の値 負の値 整数ならば 構わない
	cout << "整数値 sample1 : ";
	// cin でsample1 の変数に代入を行う
	cin >> sample1;
	// sample2 に代入する値を決める部分 0 正の値 負の値 整数ならば 構わない
	cout << "整数値 sample2 : ";
	// cin でsample2 の変数に代入を行う
	cin >> sample2;

		// 仮に sample1 = 5 sample2 = 4 ならば sample1 と sample2 が比較され 5のほうが大きい と表示される
	if(sample1 > sample2) {
		// 最初に入力した値が大きい場合のときの表示を行う
		cout << "sample1のほうが大きいですよ。";
		// 仮に sample1 = 3 sample2 = 10 ならば sample1 と sample2 が比較され 10のほうが大きい と表示される
	} else if(sample1 < sample2) {
		// 後に入力した値が大きい場合のときの表示を行う
		cout << "sample2のほうが大きいですよ。";
		// 仮に sample1 = 5 sample2 = 5 ならば sample1 と sample2 が比較され 同じ値 と表示される
	} else if(sample1 == sample2) {
		// 最初に入力した値と後に入力した値が等しいときの表示を行う
		cout << "sample1とsample2は同じ値です。";
	}
	return 0;
}
