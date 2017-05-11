/*
演習11-5 日付を読み込んで、その曜日を求めて表示するプログラムの作成

作成日 2017年5月10日

作成者 平澤敬介

編集日 2017年5月12日
*/

#include<iostream>
#include"class.h"

using namespace std;

// 前提
// 月　　　1月　　2月　　3月　　4月　　5月　　6月　　7月　　8月　　9月　　10月　　11月　　12月
// 末日　31日　28日　　31日　　30日　31日　　30日　31日　　31日　30日　31日　　30日　　　31日

int main()// 基準2000年 1月1日を水曜日とする serect = 0
{
	int* ptr = new int[3];		//new を使っている理由は特にありません

	//クラスオブジェクトにポインタの値にptrを与えます
	Date now(*ptr);
	//抽出子により、年月日 を入力します
	cin >> now;

	// 西暦何年何月何日を表示
	cout << now;

	int now_week = now.week();	//ツェラーの公式で曜日に該当する0 ～ 6の数字を受け取ります

	//ツェラーの公式を反映させ、曜日を表示します
	weekly(now_week);

	//クラスオブジェクトの値を昨日の日付にします
	Date PAST = now.past(now);

	cout << "\n";

	// 西暦何年何月何日を表示
	cout << PAST;

	int past_week = PAST.week();	//ツェラーの公式で曜日に該当する0 ～ 6の数字を受け取ります

	//ツェラーの公式を反映させ、曜日を表示します
	weekly(past_week);

	return 0;
}
