// 演習3-17 List 3－1 に再入力をする処理を追加する

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string retry;

	do{
		int month;
		// 変更箇所 do文の中 month が定義されてから
		// do文に入る これ以降入力された数字が１から１２か判別する
		do{

		cout << "季節を求めます。\n何月ですか :";
		cin >> month;
		if(month <= 0 || month >= 13)
			cout << "1から12までです。\n";
		// 変更箇所 1～12以外の数字が入力されたとき do文の初めに戻り再入力を行う
		}while(month <= 0 || month >= 13);

		if(month >= 3 && month <=5)	cout << "それは春です。\n";
		else if(month >= 6 && month <= 8)cout << "それは夏です。\n";
		else if(month >= 9 && month <= 11)cout << "それは秋です。\n";
		else if(month == 12 || month == 1 || month == 2)cout << "それは冬です。\n";

		cout << "もう一度? Y・・・Yes/N・・・NO :";
		cin >> retry;
	}while(retry == "Y" || retry == "y");

	return 0;
}
