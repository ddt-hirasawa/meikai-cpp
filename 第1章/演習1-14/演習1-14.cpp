#include<iostream>// 入出力のヘッダ
#include<cstdlib>// ランダム関数
#include<ctime>// 現在時刻

using namespace std;// 名前空間

int main()// プログラム本文 始まり
{
	srand(time(NULL));//乱数を生成

	int n = rand()&11; // 乱数0から10の間で発生
	int x;				// 変数 x を定義
	cout << "整数値 : ";// コンソールに表示
	cin >> x;			// ｘを読み込み

	cout << "その値の±5の乱数を生成しました。\n"// コンソールに表示
			<< "それは" << n+x-5 << "です。";// n+x-5 の値を表示
	return 0;// プログラム終了
}// プログラム本文 終わり
