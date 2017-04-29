// 演習3-1 符号を判別する処理 9999入力されるまで何度でも行う

#include<iostream>

using namespace std;

int main()
{
	int n;// 変数の定義 do文で使うため外で定義する

	// do文開始
	do{
	//do文の外で定義している変数を、do文の中で値を代入する
	// 中で定義すると、最後のwhileで n を見つけられずエラーになる
	cout << "整数値 : ";cin >> n;

	// 符号処理 前章で行ったif文の処理
	if(n > 0) cout << "その値は正です。\n";
	else if(n < 0) cout << "その値は負です。\n";
	else cout << "その値は０です。\n";

	// n が 9999 以外が入力されたとき、出される。
	// 9999以外であれば この文が表示された後 while文で判別されdo文の初めに移動する
	if(n != 9999) cout << "9999が入力されると終了します。\n";

	// 継続条件 9999以外ならループを続ける
	}while(n != 9999);

	return 0;
}
