/*
演習 3-4 whileループで値をデクリメントしていった時 ループから出た値が 0 かどうかを確認すること

作成日 2017年5月4日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int count;// 変数の定義 負の値でも良い 理由 -> *1

	// *1 // 負の値が入力されるまで 入力のやり直しを求められる
	do{
		// 正の整数値を入力するように促す
		cout << "正の整数値 : ";
		// countにキーボードからの値を代入する
		cin >> count;
		// 正の値で ループから脱出
	}while(count <= 0);

	// カウントダウン開始 デクリメントしながら値を表示していき
	// x の値がループから出た後どうなっているか確認する
	while(count >= 0) {
		//デクリメントされ続ける count の値を表示する
		cout << count << " \n";
		//count をデクリメントし、whileの条件式で判断される
		count--;
	}

	// whileループ終了後に,xの値を出力させています。
	// 実行結果は、count = -1 となっています。
	cout << "whileループ終了 count :" << count;
	return 0;
}


