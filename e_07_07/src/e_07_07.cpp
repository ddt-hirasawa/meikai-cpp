/*
 演習7-7 要素数n の配列から要素 a[idx] を削除する関数を作成する 後方の要素を前方に1つずらすことによって行う

 作成日 2017年5月8日

 作成者 平澤敬介
 */

#include<iostream>

using namespace std;

// 関数の宣言 仮引数として 配列 要素数 削除する配列の番号を与える
void arymv(int a[], int n, int idx);

int main() {
	int Int[10] = { 1, 3, 4, 7, 9, 11 };	// 配列の要素を初期化する

	// 削除前の配列を表示するために要素数分ループ処理を行う
	for (int i = 0; i < 6; i++) {

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

	// 関数呼び出し部分 配列の2番目の要素を削除し前に詰める処理を行う
	arymv(Int, 6, 2);

	// 削除後の配列を表示するために要素数分ループ処理を行う
	for (int i = 0; i < 6; i++) {

		// 表示するために,｛ } の表記を行います
		if (i == 0) {

			//必ず必要ではありません
			cout << "{ ";
		}
			//数値の表示を行います
			cout << Int[i];

		// 値を区切るたために　,　の表記を行います
		if (i < 6) {

			//必ず必要ではありません
			cout << " ,";
		}
	}

	//必ず必要ではありません
	cout << " }\n";

	return 0;
}

//関数 前方に詰める削除関数の宣言
//仮引数
//返却値 無し

void arymv(int a[], int n, int idx) {

	//削除する番号から最大要素までを走査するためにループ処理を行う
	for(int i = idx; i < n; i++) {

		// if文は配列の最後の要素を変更しないために必要
		if (i < n - 1) {

			// 今指しているオブジェクトを１つ後ろのオブジェクトに更新していく
			*(a + i) = *(a + i + 1);
		}
	}
}
