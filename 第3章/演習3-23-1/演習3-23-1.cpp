// 演習 3-23-1 List 3-15 を書き換え 平均も出せるようにする

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算しますか。\n";
	cout << "何個加算しますか :";  cin >> n;

	int sum=0;

	// 変更点 平均を出すための変数 ave 加算した回数を数える変数 tmp を追加
	int ave=0;
	int tmp = 0;

	for(int i=0;i<n;i++){
		int t;
		cout << "整数 (0で終了) :";
		cin >> t;
		if(t == 0) break;

		// 変更点 ０が入力されたときに終了なので 0 は加算する数には含まないものとする
		// そのため if文の後でインクリメントする
		tmp++;
		sum += t;
	}

	// 変更点 合計を カウントした回数で割ることによって平均を出している
	// ０　含まれていないのでその前に入力された数字の平均となる
	ave = sum / tmp;

	// 変更点 合計を表示した後に、平均を表示し処理を終わる
	cout << "合計は" << sum << "です。\n" << "平均は" << ave << "です。\n";
	return 0;
}
