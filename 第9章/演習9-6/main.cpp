// 演習9-6 数当てゲーム第2版を変更したプログラムの作成
//1.数の範囲を 0 ～ 999
//2.プレイヤーは10回までに正解しなければならない
//3.入力ミスはカウントしない
//4.正解のときは何回で正解したのか、失敗の時は正解の値を表示する
//

#include<iostream>

#include "math.h"

using namespace std;

int max_no = 999;		// 課題での変更点 0 ～ 999 までの値を当てなければならない

int main()
{
	initialize();
	int cnt = 0;

	cout << "数当てゲーム開始 !\n";

	do{
		int answer = get_no();			// 変更点 int型で値を返却するように変更
		int hantei;
		do{
			hantei = judge(input());
			//変更点 hantei が3以外返却したときのみ
			//回数を加算する。0～999以外のときは認めない
			if(hantei != 3)
					cnt++;
			if(hantei == 1)
				cout << "もっと小さい\n";
			else if(hantei == 2)
				cout << "もっと大きい\n";
			//変更点 hantei=3 は0～999以外が入力されたときのみ返却される
			// 入出力部分で項目を追加している
			else if(hantei == 3)
				cout << "上限は " << max_no << "です。回数に含みません。\n";

			//変更点 カウントが10回超えたのならば
			//goto文で 正解を表示する行の後に移動する
			if(cnt >= 10)
				goto Exit;
		}while(hantei != 0);
		cout << cnt << "回で 正解です\n";
		//変更点
		//if文で条件を付けないと正解と失敗が両方表示されてしまう
		Exit :
		if(hantei != 0)
		cout << "失敗です。答えは " << answer << "です。\n";//
	}while(confirm_retry());

	return 0;
}
