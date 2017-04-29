// 演習3-11 整数の和を求めるプログラム List 3-9 をfor文に書き換える

#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cout << "1からnまでの和を求めます。";

	do{
		cout << "正の整数値 :";
		cin >> n;
	}while(n <= 0);

	// 変更点 while文 から fo文r へ
	// 1 ～ n まで加算されていく
	// while文と違い、1～ｎまで 1ずつ加算された値が
	// sum に加算されていくのがわかりやすくなりました
	for(int i=1;i <= n;i++)
		sum += i;

	cout << "1～" << n << "までの和は" << sum << "です。";

	return 0;
}
