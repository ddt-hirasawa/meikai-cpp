/*
 演習7-8 要素数n の配列aから a[idx]を先頭とする k 個の要素を削除する関数を作成する
 a[idx]より後方の要素を ｋ個前にずらすことにより削除を行う

 作成日 2017年5月8日

 作成者 平澤敬介
 */

#include<iostream>

using namespace std;

// 関数の宣言 仮引数 は 配列 要素数 削除する先頭の要素の番号 個数です
void arynrmv(int a[], int n, int idx, int k);

int main() {
	int Int[10] = { 1, 3, 4, 7, 9, 11, 13, 15, 17, 19 };	// 関数に使う配列を定義する 前方に詰めるため
														// 最後の要素は 重複して表示される

	// 削除前の配列を表示するために要素数分ループ処理を行う
	for (int i = 0; i < 10; i++) {

		// 表示するために,｛ } の表記を行います
		if (i == 0) {

			//必ず必要ではありません
			cout << "{ ";
		}

		//数値の表示を行います
		cout << Int[i];

		// 値を区切るたために　,　の表記を行います
		if (i < 10) {

			//必ず必要ではありません
			cout << " ,";
		}
	}
	cout << " }\n";

	// 関数呼び出し部分 配列の2番目の要素を2個削除し前に詰める処理を行う
	arynrmv(Int, 10, 2, 2);

	// 削除後の配列を表示するために要素数分ループ処理を行う
	for (int i = 0; i < 10; i++) {

		// 表示するために,｛ } の表記を行います
		if (i == 0) {

			//必ず必要ではありません
			cout << "{ ";
		}
			//数値の表示を行います
			cout << Int[i];

		// 値を区切るたために　,　の表記を行います
		if (i < 10) {

			//必ず必要ではありません
			cout << " ,";
		}
	}

	//必ず必要ではありません
	cout << " }\n";

	return 0;
}

//関数 前方に詰めることで k個分削除する関数の宣言
//仮引数 配列の先頭要素のポインタ a[] 要素数 n 削除する配列の番号
//返却値 無し

void arynrmv(int a[], int n, int idx, int k) {

	//先頭要素から 要素の最後まで走査するためループ処理を行う
	for(int i = idx; i < n; i++) {
		// 配列の最後の要素は変更しないようにif文を設ける
		if (i < n - k) {
			// 今指しているオブジェクトを ｋ個後ろの要素へと更新していく
			*(a + i) = *(a + i + k);
		}
	}
}
