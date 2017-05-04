/*
演習3-13 身長と標準体重を表にして出力する

作成日 2017年5月4日

作成者 平澤敬介
*/


#include<iostream>

using namespace std;

int main()
{
	int min,max,tempo;// 身長の最小値 最大値 加算する長さの変数を定義

	// 単なる宣言 これ以降、身長と体重の表を作っていく
	cout << "身長と体重の表\n";

	// 身長の最小値 最大値 長さを代入する部分 (身長-100) * 0.9 を標準体重とする
	// 一番身長の低い人は？
	cout << "何cmから :";

	//身長の最小値を入力してください
	cin >> min;

	// 一番身長の高い人は？
	cout << "何cmまで :";

	//身長の最大値を入力してください
	cin >> max;

	// 何cm ごとに長じさせますか？
	cout << "何cmごと :";

	//　加算する身長を入力してください
	cin >> tempo;

	// 単なる宣言 これ以降、身長と体重の表を表示していく
	cout << " 身長    標準体重\n";

	// 身長の最小値から最大値まで 長さ t ごとに加算された値を表示していく
	for(int i=min;i <= max;i=i+tempo) {
		// 身長と標準体重を表示して次の表示に備える
		cout << " " << i << "   " << (i-100)*0.9 << "\n";
	}
	return 0;
}
