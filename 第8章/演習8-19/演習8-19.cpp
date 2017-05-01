//演習8-19 演習8－18を改修して 小数点にも対応した関数を製作する

#include<iostream>

//文字列を処理するためのライブラリ
#include<cstring>

using namespace std;

// char型で表示された値をdouble型に変換する関数の宣言
double str2double(const char*);

int main()
{
	char digits[] = "-130.5678";	// char型の整数値 負の値も検出することも確認する

	//関数呼び出し前の配列を表示し/コンソールで確認すること
	cout << "文字列 digits : " << digits << "\n"
			<< "double型に変換\n";
												//
	double num = str2double(digits);	//関数を呼び出し変数numで受け取る
										//負の値の場合でも動作するか確認はしました。
	cout << "double型 値 : " << num;

	return 0;
}

// char型で表示された値をdouble型の値に変換する関数
double str2double(const char* num)
{
	int len = strlen(num);		// 整数型の桁を出す
	double number = 0;			//返却する値を0で初期化し各桁を加算していく個の値を返却する
	double cnt1 = 1;			//各桁に 10 を乗算していきnumberに加算する数字を作る 整数部分 の変数
	double cnt2 = 0.1;			//各桁に 10 で割った値を numberに加算していき数字を作る 小数部分 の変数
	int plus = 0;				//負の値を検出する用の変数
	int floa = 0;				//小数点を検出する用の変数

	//ポインタが先頭の文字で '-'を指したとき
	//plusをデクリメントして置き後でif文に使う
	if(*num == '-') plus--;

	// 文字列を先頭から走査して 小数点を見つけるまで続けるためループ処理を行う
	for(int i=0;i <= len-1;i++){
		//小数点を見つけたとき,そのときのポインタの指す位置を変数で保管しておく
			if(*(num+i) == '.'){
				floa = i;
			}
	}
			//		整数部分
	//小数点の1つ前から先頭まで処理を行っていくためにループ処理を行う
	for(int i=floa-1;i >= 0;i--){
		//文字 1 ～ 9 の文字を検出したときswitch文で
		// それぞれnumberにその桁をかけて加算する
		switch(*(num+i)){
		case '1' : number += cnt1 * 1;break;
		case '2' : number += cnt1 * 2;break;	//それぞれで対応した値と桁で演算を
		case '3' : number += cnt1 * 3;break;	//行い 返却する number に加算していく
		case '4' : number += cnt1 * 4;break;	//
		case '5' : number += cnt1 * 5;break;	//default では 0 を検出し
		case '6' : number += cnt1 * 6;break;	//加算せず break文でswitch文から
		case '7' : number += cnt1 * 7;break;	//抜け出す
		case '8' : number += cnt1 * 8;break;	//
		case '9' : number += cnt1 * 9;break;	//
		case '0' : break;
		default  : break;
		}
		//加算が終わったとき次の桁へ行くために10 を乗算していく
		// 次の桁に移り先頭の文字列で終了する
			cnt1 *= 10;
	}

			//　少数部分
	//小数点の1つ後ろからナル文字の手前まで処理を行っていくためにループ処理を行う
	for(int i=floa+1;i <= len-1;i++){
		//文字 1 ～ 9 の文字を検出したときswitch文で
		// それぞれnumberにその桁をかけて加算する
		switch(*(num+i)){
		case '1' : number += cnt2 * 1;break;	//文字 1 ～ 9 の文字を検出したとき
		case '2' : number += cnt2 * 2;break;	//それぞれで対応した値と桁で演算を
		case '3' : number += cnt2 * 3;break;	//行い 返却する number に加算していく
		case '4' : number += cnt2 * 4;break;	//
		case '5' : number += cnt2 * 5;break;	//default では 0 を検出し
		case '6' : number += cnt2 * 6;break;	//加算せず break文でswitch文から
		case '7' : number += cnt2 * 7;break;	//抜け出す
		case '8' : number += cnt2 * 8;break;	//
		case '9' : number += cnt2 * 9;break;	//
		case '0' : break;
		default  : break;
		}
		//加算が終わったとき次の桁へ行くために0.1をかける
		// 整数部分と違いどんどん値が小さくなっていく
			cnt2 *= 0.1;
	}
	// －を検出していた場合 負の値にする
	if(plus < 0) number *= -1;

	return number;
}
