
 //入出力のヘッダ
#include<iostream>

// 名前空間の指定
using namespace std;

// プログラム本文 始まり
int main()
{
	// 合計と平均を表示するために 3つの値定義しそれぞれ初期化
	int a = 100; // int型 a を100で初期化
	int b = 50; //int型 b を50で初期化
	int c = 10; //int型 c を10で初期化
	// 合計と平均を表示するための変数をそれぞれ 0で初期化する
	int sum = 0; // int型 sum を0で初期化
	int ave = 0; // int型 ave を0で初期化

	 // 合計
	sum = a+b+c;
	 // 平均
	ave = sum/3;

	// 挿入子で文字 と 合計と平均が代入された変数も流れていく
	cout << "合計 :" << sum <<
			"\n平均 :" << ave;

	// プログラム終了
	return 0;
}// プログラム本文 終わり
