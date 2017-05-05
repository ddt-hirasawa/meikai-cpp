/*
演習3-9 List3-4 for文に書き換え同じ動作をするようにする

作成日 2017年5月4日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int count;	//カウントダウンする数字を補完する変数を作成

	//これからカウントダウンすることを宣言する
	cout << "カウントダウンします";

	// 整数値が入力されるまでのループ開始
	do{
		// 正の整数値を入力するように促す
		cout << "正の整数値 :";
		//countにキーボードからの値を代入する
		cin >> count;
		//負の値であれば振出しに戻る
	}while(count <= 0);

	// 変更点 for文で i をデクリメントしながら表示を行う
	// while文とほぼ同じ動作をする
	for(int i=count;i >= 0;i--) {
		//for文の制御式でデクリメントされた値が表示される
		cout << i << "\n";
	}

	return 0;
}
