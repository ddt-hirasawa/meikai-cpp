#include<iostream> //入出力のヘッダ

using namespace std;// 名前空間の指定

int main()// プログラム本文 始まり
{
	int a = 100; // int型 a を100で初期化
	int b = 50; //int型 b を50で初期化
	int c = 10; //int型 c を10で初期化
	int sum = 0; // int型 sum を0で初期化
	int ave = 0; // int型 ave を0で初期化

	sum = a+b+c; // 合計
	ave = sum/3; // 平均

	cout << "合計 :" << sum << // 合計　と
			"\n平均 :" << ave;//平均を出力
	return 0;// プログラム終了
}// プログラム本文 終わり
