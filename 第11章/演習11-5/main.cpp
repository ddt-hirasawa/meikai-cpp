#include<iostream>
#include"class.h"

using namespace std;

// 前提
// 月　　　1月　　2月　　3月　　4月　　5月　　6月　　7月　　8月　　9月　　10月　　11月　　12月
// 末日　31日　28日　　31日　　30日　31日　　30日　31日　　31日　30日　31日　　30日　　　31日

int main()// 基準2000年 1月1日を水曜日とする serect = 0
{


	int* ptr = new int[3];
	Date now(*ptr);
	cin >> now;

	int days = now.dswitch(now.month());

	now.d = days;

	cout << now;	// 西暦何年何月何日を表示

	int now_week = now.week();

	weekly(now_week);

	Date PAST = now.past(now);

	cout << "\n";

	cout << PAST;

	int past_week = PAST.week();

	weekly(past_week);

	return 0;
}
