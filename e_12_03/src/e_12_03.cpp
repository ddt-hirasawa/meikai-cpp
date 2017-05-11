/*
演習12-3 演習11-3で作成した時刻クラスに各種の演算子関数を追加せよ

作成日 2017年5月11日

作成者 平澤敬介
*/

#include<iostream>
// 自作の日付クラス このクラスにこの章で学んだ演算子関数を追加していく
#include"class.h"

using namespace std;

int main()
{
	//誕生日を入力する部分 メンバとしてのクラスとして扱う
	date birth = date(0);

	//date の抽出子で誕生日を入力
	cin >> birth;

	// 時刻クラスの初期化 誕生日 dateを初期化に加える
	time now = time(2017,5,11,birth);

	//挿入子で
	cout << now << "\n";

	//明日の日付を表示していくためループ処理を行う
	// 大晦日で表示を終了する
	while(true){
		++now;
		cout << now << "\n";

		// 演算子関数でfalseが返却されてくるのは
		// 来年の大晦日だけ。
		//その日付までをカウントする うるう年非対応
		if(!now == false) {

			//誕生日で表示をやめます
			break;
		}
	}

	// 今日の日付から何日で大晦日なのか表示する
	cout << "次の誕生日まで " << now.Count() << "日です\n";

	return 0;
}
