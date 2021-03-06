/*
演習2-6 点数の判別を行う処理 範囲を指定して、その範囲に収まる値のとき応じた表示を行う

作成日 2017.5.4

作成者 平澤敬介
 */


#include<iostream>

using namespace std;

int main()
{

	int result;// テストの点数を想定している 入力する変数n を定義
				// どの値でも通過する ただし、0 ～ 100 の範囲から出た場合
				// すべて 入力ミス 扱いとする

		//点数の入力を促します。
	cout << "点数の判定を行います。";
		// cin で点数を変数に代入します。
	cin >> result;

		// 満点～ 80点までの 生徒は 優 判定
	if(result <= 100 && result >= 80) {
		//成績が最も良い部類
		cout << "優";
		// 79～ 70点までの 生徒は 良
	} else if(result <= 79 && result >= 70) {
		//成績が次に良い部類
		cout << "良";
		// 69～ 60点までの 生徒は 可 判定
	} else if(result <= 69 && result >= 60) {
		//成績が合格ラインの部類
		cout << "可";
		// 59～ 0点までの 生徒は 不可 判定 赤点
	} else if(result <= 59 && result >= 0) {
		// 再テスト組の部類
		cout << "不可";
		// テストは 基本 100点満点であるため それ以外はすべて入力ミス
	} else if(result < 0 || result > 100) {
		// 入力のやり直し
		cout << "入力ミス";
	}

	return 0;
}
