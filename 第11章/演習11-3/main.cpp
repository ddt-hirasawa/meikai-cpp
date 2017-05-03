#include<iostream>
#include"class.h"// 自作 時間クラス を取り込む

using namespace std;

int time_set(int max,int min);
void now_time(Time* tmp);

int main()
{
	int h,m,s;
	cout << "現在時刻\n";//
	cout << "何時 : ";	//現在時刻を入力する部分
	h = time_set(HH,NN);//
	cout << "何分 : ";	//ソース内の変数 h m s を クラス TOKYO に与える
	m = time_set(MM,NN);//
	cout << "何秒 : ";	//時 分 秒 それぞれで 上限を決めているので
	s = time_set(SS,NN);//時刻として成立した値が返却される
	Time SHINJUK(0);
	cin >> SHINJUK;

	Time TOKYO(h,m,s);	// クラス TOKYO で値を受け取る

	now_time(&TOKYO);// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する

	/*int serect;// 時 分 秒 どれを操作するのか決めるため, do文の外で定義する
	do{
		int tmp = 0;		// 実際に加算する変数 を 0時 0分 0秒で定義
		cout << "どのくらい経過しましたか？\n";
		cout << "時 -> 0 / 分 -> 1 / 秒 -> 2 それ以外で終了\n";
		cin >> serect;// 0 1 2 以外の数字で 時間の加算を終える
		switch(serect){
		case 0 :						//時 を加算する部分
			cout << "何時間 : ";		//
			cin >> tmp;					//
			TOKYO.plus_hour(tmp); break;//メンバ関数でクラス内の変数を間接的にアクセス
		case 1 :						//分 を加算する部分
			cout << "何分 : ";			//
			cin >> tmp;					//
			TOKYO.plus_min(tmp); break;//メンバ関数でクラス内の変数を間接的にアクセス
		case 2 :						//秒 を加算する部分
			cout << "何秒 : ";			//
			cin >> tmp;					//
			TOKYO.plus_sec(tmp); break;//メンバ関数でクラス内の変数を間接的にアクセス
		default : break;				// 0～2 以外のとき現在時刻を返却して終了
		}

		now_time(&TOKYO);// アロー演算子を使って現在時刻を表示させる そのため、クラスのアドレスを提供する

	}while(serect <= 2 && serect >= 0);// 0 1 2 以外の数字で 時間の加算を終える*/

	cout << SHINJUK;

	return 0;
}

int time_set(int max,int min) // min = NN / max = HH 時 / max = MM 分 / max = SS 秒
{
	int answer;
	do{									//
	cin >> answer;						// max と min を与えることで
	if(max <answer || min > answer)		//範囲内の 時 分 秒が 必ず返却される
		cout << "やり直し\n";			//
	}while(max < answer || min > answer);//

	return answer;
}

void now_time(Time* tmp) // ポインタを使ってクラスを扱う
{
	cout << "現在時刻\n";//		アロー演算子			ポインタ
	cout << tmp->Hour() << "時" << tmp->Min() << "分" << (*tmp).Sec() << "秒\n";
}

ostream& operator << (ostream& stream,Time& obj)
{
	return stream << obj.Hour() << "時" << obj.Min() << "分" << obj.Sec() << "秒\n" ;
}

istream& operator >> (istream& stream,Time& obj)
{
	cout << "時 : ";
	stream >> obj.hour;
	cout << "分 : ";
	stream >> obj.min;
	cout << "秒 : ";
	stream >> obj.sec;
	return stream;

}
