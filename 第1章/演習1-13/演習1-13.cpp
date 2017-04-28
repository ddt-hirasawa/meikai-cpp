#include<iostream> // 入出力のヘッダ
#include<ctime>// 現在時刻のヘッダ
#include<cstdlib>// ランダム関数

using namespace std;// 名前空間の指定

int main() // プログラム本文始まり
{
	srand(time(NULL)); // 乱数を生成

	int a = 1 + rand() % 9; // 1～9の正の整数
	int b = -1 - rand() % 9; // -1～　-9の整数
	int c = 10 + rand() % 90; // 10～99の正の整数

	cout << "1～9の正の整数 :" << a 	// 1から9の正の整数を表示
			<< "\n -1～　-9の整数 :" << b// -1から-9の整数を表示
			<< "\n10～99の正の整数 :" << c;// 10から999の正の整数を表示
	return 0;// プログラム終了
}// プログラム本文終わり
