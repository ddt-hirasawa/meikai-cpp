/*
演習9-6 数当てゲーム第2版を変更したプログラムの作成
1.数の範囲を 0 ～ 999
2.プレイヤーは10回までに正解しなければならない
3.入力ミスはカウントしない
4.正解のときは何回で正解したのか、失敗の時は正解の値を表示する

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

//数当てゲーム用のヘッダ
#include "math.h"

using namespace std;

//関数 数当てゲームをする際、当てる数字の範囲を表示させる
//仮引数 無し
//返却値 無し

static void promt()
{
	//仮引数は無いが、静的記憶域機関にある変数を表示する
	cout << "0～" << max_no << "の数 : ";
}

//関数 答えを入力する関数
//仮引数 無し
//返却値 キーボードからの値をそのまま返却します

int input()
{
	int val;	//この変数に代入された値がそのまま解答として別の処理で判別されます
	//do{
		//関数の呼び出し 当てる数の範囲を表示させます。
		promt();

		// 変更点 入力される値に制限をなくしどんな値でも受け付ける
		cin >> val;
	//}while(val < 0 || val > max_no);
	return val;
}

//関数 true false を返却しdo while の繰り返しを継続させるのか終了させるのか判別します
//仮引数 なし
//返却値 bool型の true -> 1  false -> 0

bool confirm_retry()
{
	char answer;		//文字の入力で判定したいです
	int Answer = 0;		//デフォルトはfalse 続けません

	do{
	//Yes or No で判断します
	cout << "もう一度しますか?\n"
			<< "<Yes・・ / No・・> : ";
	//キーボードからの値を受け付けます
	cin >> answer;

	//ただし、Y,N,y,n 以外ならばやり直し
	}while(answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N');

	//続けます
	if(answer == 'y' || answer == 'Y') {

		//true を代入します
		Answer = 1;
	}
	//bool型に変換してwhileに返します
	return static_cast<bool>(Answer);
}
