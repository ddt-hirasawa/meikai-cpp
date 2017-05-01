//演習9-9 演習9－6で内部結合をもつ識別子を、名前なしの名前空間に属するように書き換える

#include"header.h"

#include<iostream>

// 変更点無し 演習9－6のまま変更部分はないです

using namespace std;

int max_no = 10;

int main()
{
	initialize();
	int cnt = 0;

	cout << "数当てゲーム開始 !\n";

	do{
		int answer = get_no();
		int hantei;
		do{
			hantei = judge(input());
			if(hantei != 3)
					cnt++;
			if(hantei == 1)
				cout << "もっと小さい\n";
			else if(hantei == 2)
				cout << "もっと大きい\n";
			else if(hantei == 3)
				cout << "上限は " << max_no << "です。回数に含みません。\n";

			if(cnt >= 10)
				goto Exit;
		}while(hantei != 0);
		cout << cnt << " 正解です\n";
		Exit :
		if(hantei != 0)
		cout << "失敗です。答えは " << answer << "です。\n";
	}while(confirm_retry());

	return 0;
}
