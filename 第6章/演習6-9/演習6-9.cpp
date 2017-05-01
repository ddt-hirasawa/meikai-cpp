// 演習6-9 a 以上 b 未満の乱数を生成する関数を作成する

#include<iostream>

// ランダム関数を使うためのライブラリ
#include<cstdlib>
// 現在時刻を定義されているライブラリ
#include<ctime>

using namespace std;

int random(int,int);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	// 乱数の種を現在時刻で生成する
	srand(time(NULL));

	int i,j;

	cout << "乱数を生成します。\n"
			"範囲を指定してください\n"
			"最小値 :";
	cin >> i;
	cout << "最大値 :";
	cin >> j;

	cout << i << " ～ " << j << " までの乱数 : "
	//関数呼び出し部分 呼び出すときに変数の値を与える
		<< random(i,j);

	return 0;
}

// 乱数を指定した範囲で返却する関数
int random(int a,int b)
{
	// a と b の値でaの値が小さい場合
	// 範囲指定した乱数を返却する
	if(b > a)
		return a + rand() % (b-a);
	else
		return a;
}
