//演習2-2 else と else if がどのように動作するか確認する
#include<iostream>

using namespace std;

int main()
{
	// 変数nを 定義 値となる 0 正の値 負の値 をif文で判断され
	// 対応した表示を行う処理
	int n;
	// ｎ の値を決める部分 整数であれば どの値でも対応する
	cout << "整数値 : "; cin >> n;

	// 仮に n = 1ならば 正 と表示される
	if(n>0)	 cout << "その値は正です。\n";
	// 仮に n = ‐1ならば 負 と表示される
	else if(n<0) cout << "その値は負です。\n";
	// n = 0のときのみ、 0と表示される ここは else に書き換えても良い
	else if(n==0) cout << "その値は0です。\n";

	return 0;
}
// 同じ動作をします。
