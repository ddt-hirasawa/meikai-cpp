// 演習3-13 身長と標準体重を表にして出力する

#include<iostream>

using namespace std;

int main()
{
	int min,max,t;// 身長の最小値 最大値 加算する長さの変数を定義

	// 単なる宣言 これ以降、身長と体重の表を作っていく
	cout << "身長と体重の表\n";

	// 身長の最小値 最大値 長さを代入する部分 (身長-100) * 0.9 を標準体重とする
	cout << "何cmから :"; cin >> min;
	cout << "何cmまで :"; cin >> max;
	cout << "何cmごと :"; cin >> t;

	// 単なる宣言 これ以降、身長と体重の表を表示していく
	cout << " 身長    標準体重\n";

	// 身長の最小値から最大値まで 長さ t ごとに加算された値を表示していく
	for(int i=min;i<=max;i=i+t)
		cout << " " << i << "   " << (i-100)*0.9 << "\n";

	return 0;
}
