//演習9-9 演習9－6で内部結合をもつ識別子を、名前なしの名前空間に属するように書き換える

#include"header.h"

#include<iostream>

using namespace std;

// 変更点 名前無しの名前空間に 関数promt() を置くことで
// 関数を静的記憶域期間に置かなくてもよくなる
namespace {
void promt()
{
	cout << "0～" << max_no << "の数 : ";
}
}

int input()
{
	int val;
	//do{
		promt();
		cin >> val;
	//}while(val < 0 || val > max_no);
	return val;
}

bool confirm_retry()
{
	int cont;
	cout << "もう一度しますか?\n"
			<< "<Yes・・1 / No・・0> : ";
	cin >> cont;

	return static_cast<bool>(cont);
}
