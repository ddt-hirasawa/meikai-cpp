/*
演習8-18 文字列として入力された数字からint型の整数を返却する関数を作成する

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

//文字列を処理するためのライブラリ
#include<cstring>

using namespace std;

// char型で表示された値をint型整数値に変換する関数の宣言
int str2int(const char*);

int main()
{
	char digits[] = "-163f3234";	// char型の整数値 これをint型にする

	//関数呼び出し前の配列を表示しコンソールで確認すること
	cout << "文字列 digits : " << digits << "\n"<< "int型 整数値に変換\n";

	//関数を呼び出し、変数numで受け取る
	//負の値の場合でも動作するか確認はしました。
	int num = str2int(digits);

	//表示は変わりませんが、変数になっているので演算が可能です
	cout << "int型整数値 : " << num;

	return 0;
}

//関数 char型で表示された値をint型整数値に変換する
//仮引数 文字列の数字 文字が入っていた場、認識しません
//返却値 int型に変換したchar型の整数

int str2int(const char* num)
{
	int len = strlen(num);		// 整数型の桁を出すために変数を定義する
	int number = 0;				//返却する値を0で初期化し各桁を加算していく変数を定義する
	int cnt = 1;				//ループごとに 10 を乗算していく変数を定義する
								// 各桁に10 100 1000 をかけるために使う
	int plus = 0;				//負の値を検出する用の変数
	int injustice = 0;			//不正文字検出用

	//ポインタが先頭の文字で '-'を指したとき
	//plusをデクリメントして置き後でif文に使う
	if(*num == '-')	{

		// 符号の判別で使います
		plus--;
	}

	//文字列の最後尾から最大の桁まで処理を行っていくためループ処理を行う
	for(int i=len-1; i >= 0; i--) {

		//文字 1 ～ 9 の文字を検出したときswitch文で
		// それぞれnumberにその桁をかけて加算する
		switch(*(num+i)) {

		// 文字が1のとき、numberに桁に1をかけて加算する
		// 以下同様の部分が 1から9まである
		// switch文で数字文字を検出して、そこに該当する
		//演算をおこなうことで int型の整数を返却していきます。
		case '1' : number += cnt * 1;break;
		case '2' : number += cnt * 2;break;
		case '3' : number += cnt * 3;break;
		case '4' : number += cnt * 4;break;
		case '5' : number += cnt * 5;break;
		case '6' : number += cnt * 6;break;
		case '7' : number += cnt * 7;break;
		case '8' : number += cnt * 8;break;
		case '9' : number += cnt * 9;break;
		//文字が0の場合 、その桁には何もせずswitch文から抜け出す
		case '0'  : break;
		//数字以外を一度でも検出したならば、変換できません
		default : if(*(num + i) != '-') {

					// ただし、符号 - は例外です
					injustice++;
				}
		}

		//加算が終わったとき次の桁へ行くためにcnt10 を乗算していく
		cnt *= 10;
	}
	// －を検出していた場合 負の値にする
	if(plus < 0) {

		//マイナスの値に戻します
		number *= -1;
	}

	//不正文字があった場合、ここまでの演算は無駄になります
	if(injustice != 0) {

		//ここまで加算した値を0にします
		number *= 0;
	}

	//すべての演算が終わった場合 char型と同じint型の整数が表示される
	return number;
}
