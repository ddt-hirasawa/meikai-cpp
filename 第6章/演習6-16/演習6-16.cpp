// 静的記憶域期間を持つ配列の要素がすべて0で初期化されることを確認する

#include<iostream>

using namespace std;

int a[10]; // 静的記憶域期間 で要素10の配列を定義

int main()
{
	int b[10]; // 動的記憶域期間 で要素10の配列を定義

	//単なる宣言 記憶域期間での値を表示するための宣言
	cout << "静的記憶域期間    動的記憶域期間\n";

	//全要素を表示させるために要素数分のループ処理を行う
	for(int i=0;i<10;i++)
		//
		cout << "a[" << i << "] = " << a[i]
			<< "      b[" << i << "] = " << b[i] << "\n";
	return 0;
}

/*　実行結果
 * 静的記憶域期間    動的記憶域期間
a[0] = 0      b[0] = -1
a[1] = 0      b[1] = -1
a[2] = 0      b[2] = 4200562
a[3] = 0      b[3] = 0
a[4] = 0      b[4] = 1
a[5] = 0      b[5] = 0
a[6] = 0      b[6] = 4200425
a[7] = 0      b[7] = 0
a[8] = 0      b[8] = 0
a[9] = 0      b[9] = 0

 静的記憶域期間 動的記憶域期間 両方 初期化を行っていませんが
 静的記憶域機関では すべての要素が０で初期化されることを確認しました
