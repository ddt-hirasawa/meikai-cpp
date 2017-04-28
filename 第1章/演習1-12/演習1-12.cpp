// 演習1-12 三角形の面積をキーボードから底辺と高さを入力し表示される

#include<iostream>

using namespace std;

// プログラム本文始まり
int main()
{
	double hen,takasa;// double型 hen takasa それぞれ 底辺 高さ

	// 三角形の面積を求めるために宣言を行う
	cout << "三角形の面積を求めます。\n";
	// 三角形の面積を求めるために 底辺 の 値を 抽出する部分
	cout << "底辺 : ";cin >> hen;
	// 三角形の面積を求めるために 高さ の 値を 抽出する部分
	cout << "高さ : ";cin >> takasa;
	//三角形の面積を求めるために double型で変数を定義し
	//値を三角形の面積の公式で初期化
	double menseki = (hen*takasa)/2;
	//挿入子で変数 menseki の三角形の面積が表紙さる
	cout << "面積は" << menseki << "です。";

	return 0;

}
