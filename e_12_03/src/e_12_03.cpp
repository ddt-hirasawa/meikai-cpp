/*
演習12-3 演習11-3で作成した時刻クラスに各種の演算子関数を追加せよ

作成日 2017年5月11日

 編集日 2017年5月12日

作成者 平澤敬介
*/

#include<iostream>

// 自作 時間クラス を取り込む
#include"class.h"

using namespace std;

int time_set(int max,int min);
void now_time(Time* tmp);
ostream& operator<<(ostream& s,Time& x);

int main()
{
	int h,m,s;		// オブジェクトを構成する 時 分 秒 を代入する変数を定義します
	int plus,minus;	//加算,減算する値をキーボードからの値で決めたいので定義します

	//現在の時刻の入力を要求します
	cout << "現在時刻\n";//

	//現在時刻を入力する部分
	//1日は24時間です
	cout << "何時 : ";

	//関数で範囲内の 時 を得ます
	h = time_set(HH-1,NN);

	//1時間は60分です
	cout << "何分 : ";

	//関数で範囲内の 分 を得ます
	m = time_set(MM-1,NN);

	//1分は60秒です
	cout << "何秒 : ";

	//関数で範囲内の 秒 を得ます
	s = time_set(SS-1,NN);

	//クラス Timeで　tokyoオブジェクトを作ります
	Time tokyo(h,m,s);

	// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する
	now_time(&tokyo);

	int answer;

	do {
	//課題 +=演算子関数
	cout << "何秒後を表示しますか？ : ";

	//時刻を加算します
	cin >> plus;

	//現在時刻に反映させます
	tokyo += plus;

	//現在時刻を更新します 未来
	now_time(&tokyo);

	//課題 -=演算子関数
	cout << "何秒前を表示しますか？ : ";

	//時刻を加算します
	cin >> minus;

	//現在時刻に反映させます
	tokyo -= minus;

	//現在時刻を更新します 過去
	now_time(&tokyo);

	cout << "繰り返しますか？ 0 で終了";
	cin >> answer;

	} while(answer != 0);

	int select;		//	時分秒を加算するときに選ぶために使います

	do{

		//宣言 これより時間を加算します
		cout << "どのくらい経過しましたか？\n";

		//項目を選びます 時 分 秒 どの項目を加算しますか？
		cout << "時 -> 0 / 分 -> 1 / 秒 -> 2 それ以外で終了\n";


		cin >> select;		// 0 1 2 以外の数字で 時間の加算を終える

		//訂正部分 選択された値を加算し反映させる
		tokyo.set_time(select);

		// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する
		now_time(&tokyo);

	// 0 1 2 以外の数字で 時間の加算を終える
	}while(select <= 2 && select >= 0);

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

//挿入子
ostream& operator<<(ostream& s,Time& x)
{
	return s << x.Hour() << "時" << x.Min() << "分" << x.Sec() << "秒\n" ;
}
