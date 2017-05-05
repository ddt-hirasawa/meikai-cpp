/*
 演習3-12 演習3-11 を改修して 加算されていく過程を表示する

作成日 2017年5月4日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	int nMax;
	int sum = 0;

	cout << "1からnまでの和を求めます。";

	// nMax が負の値では加算できないので正の値を
	//入力するまで繰り返す
	do{
		// 正の整数値を入力するように促す
		cout << "正の整数値 :";
		// nMaxにキーボードからの値を代入する
		cin >> nMax;
		// 負の値の限り繰り返す
	}while(nMax <= 0);

	// 変更点 演習3-11 を変え sum に加算する前に
	// i + を n -1 まで行う
	for(int i=1;i < nMax;i++) {
		// 過程を表示するために加算される i と ＋ をnMax-1まで表示する
		cout << i << " + ";
		// 合計に変数sumにiを加算する
		sum += i;
	}

	// 変更点 for 文の外で n-1 まで加算されているので n の値を sum に加算する
	sum += nMax;
	// 変更点 最大値と合計を過程となるように表示する
	cout << nMax << " = " << sum;

	return 0;
}
