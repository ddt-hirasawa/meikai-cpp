/*
演習3-8 List 3-10 を書き換え 読み込んだ値が1未満なら改行しないようにする

作成日 2017年5月4日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int nMax;	// * を表示する回数を決めるための変数
	// *を何個表示するか入力を促す
	cout << "何個*を表示しますか : ";
	//nMaxにキーボードからの値を代入する
	cin >> nMax;

	// 0～nMaxまで＊の表示を行うためにループ処理を行う
	for(int i=0;i < nMax;i++) {
		//*の表示を１つ行う
		cout << '*';
	}

	// 変更点 入力された n が 1 より大きければ改行する
	if(nMax > 1) {
		// 改行文字の出力
		cout << "\n";
	}

	return 0;
}
