#include<iostream>

#include "math.h"

using namespace std;

static void promt()
{
	cout << "0～" << max_no << "の数 : ";
}

int input()
{
	int val;
	//do{
		promt();
		cin >> val;// 変更点 入力される値に制限をなくしどんな値でも受け付ける
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
