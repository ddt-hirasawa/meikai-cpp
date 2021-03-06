/*
演習11-3 演習11－1で作成した時刻クラスに抽出子と挿入子を追加せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>

// 自作 時間クラス を取り込む
#include"class.h"

using namespace std;

int time_set(int max,int min);
void now_time(Time* tmp);

int main()
{
	Time test(0);

	cin >> test;

	cout << test;

	cout << "ここまでが追加した挿入子と抽出子\n";

	int h,m,s;		// オブジェクトを構成する 時 分 秒 を代入する変数を定義します
	int serect;		// 時 分 秒 どれを操作するのか決めるため, do文の外で定義する

	//現在の時刻の入力を要求します
	cout << "現在時刻\n";//

	//現在時刻を入力する部分
	//1日は24時間です
	cout << "何時 : ";

	//関数で範囲内の 時 を得ます
	h = time_set(HOUR-1,NULL_);

	//1時間は60分です
	cout << "何分 : ";

	//関数で範囲内の 分 を得ます
	m = time_set(MIN-1,NULL_);

	//1分は60秒です
	cout << "何秒 : ";

	//関数で範囲内の 秒 を得ます
	s = time_set(SEC-1,NULL_);

	//クラス Timeで　tokyoオブジェクトを作ります
	Time tokyo(h,m,s);

	// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する
	now_time(&tokyo);


	do{
		int tmp = 0;		// 実際に加算する変数 を 0時 0分 0秒で定義

		//宣言 これより時間を加算します
		cout << "どのくらい経過しましたか？\n";

		//項目を選びます 時 分 秒 どの項目を加算しますか？
		cout << "時 -> 0 / 分 -> 1 / 秒 -> 2 それ以外で終了\n";


		cin >> serect;		// 0 1 2 以外の数字で 時間の加算を終える

		//指定した項目で加算処理を行い、現在時刻に反映させます
		switch(serect){

		//時 を加算する部分
		case 0 :

			//時間を加算します
			cout << "何時間 : ";

			//整数で時を加算します
			cin >> tmp;

			//メンバ関数でクラス内の変数を間接的にアクセス
			tokyo.plus_hour(tmp); break;

		//分 を加算する部分
		case 1 :

			//分を加算します
			cout << "何分 : ";

			//整数で分を加算します
			cin >> tmp;

			//メンバ関数でクラス内の変数を間接的にアクセス
			tokyo.plus_min(tmp); break;

		//秒 を加算する部分
		case 2 :

			//秒を加算します
			cout << "何秒 : ";

			//整数で秒を加算します
			cin >> tmp;

			//メンバ関数でクラス内の変数を間接的にアクセス
			tokyo.plus_sec(tmp); break;

		// 0～2 以外のときは即終了
		default : break;
		}

		//訂正部分 加算し終わった段階で 時 分 秒 をすべて反映させます
		tokyo.set_time();

		// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する
		now_time(&tokyo);

	// 0 1 2 以外の数字で 時間の加算を終える
	}while(serect <= 2 && serect >= 0);

	return 0;
}

//関数 現在時刻を1日の範囲内で得るために範囲を指定して時間を得ます
//仮引数 時 分 秒 の一般的な最大値と 0時 0分 0秒を与えます
//返却値 時 分 秒 の範囲内の値

// min = NN / max = HH 時 / max = MM 分 / max = SS 秒
int time_set(int max,int min)
{
	int answer;			//キーボードからの入力で 時 分 秒 を決めるため変数を定義します

	do{

	cin >> answer;		//時 分 秒 を確認します

	//1日の範囲内での値が入力されなかったらやり直し
	if(max <answer || min > answer) {
		cout << "やり直し\n";
	}
	//25時79分100秒などではやり直し
	}while(max < answer || min > answer);//

	//訂正が終わったなら値を書き込みます
	return answer;
}

//関数 クラスオブジェクトでメンバ関数を呼び出す
//仮引数 クラスオブジェクト
//返却値 無し

void now_time(Time* tmp) // ポインタを使ってクラスを扱う
{

	cout << "現在時刻\n";//		アロー演算子			ポインタ
	cout << tmp->Hour() << "時" << tmp->Min() << "分" << (*tmp).Sec() << "秒\n";
}
