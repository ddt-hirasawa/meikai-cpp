/*
演習11-7 演習10－2で作成した自動車クラスに購入日を格納するデータメンバ、それを返却するメンバ関数を作成せよ

作成日 2017年5月10日

作成者 平澤敬介
*/


#include<iostream>
#include"class.h"

using namespace std;

int main() {
	string name;				//車名
	int wid, leng, hei, num;	//横幅　長さ　高さ　ナンバー
	double gas, tank, fire;		//ガソリン　タンク容量　燃費

	//基礎スペックを入力します
	cout << "車のデータを入力\n";

	//車の名前 スバル　プリウス　ハイエース
	cout << "車名 : ";
	cin >> name;

	//車の横幅　公道を走れる幅でなければなりません
	cout << "車幅 : ";
	cin >> wid;

	//車の長さ　ハイエースくらいになると私は運転できません
	cout << "車長 : ";
	cin >> leng;

	//車高　公道では高さ制限があるところがあるので高すぎると通れません
	cout << "車高 : ";
	cin >> hei;

	//種類にもよりますが、大体 50 ～ 70 L くらいみたいです
	cout << "タンク容量 : ";
	cin >> tank;

	//今の燃料がどれくらい残っているのか入力します
	do {
		//タンク容量以上が入力されたら間違いです
		cout << "残り燃料 : ";
		cin >> gas;

		//if文で容量を比べます
		if (tank < gas) {

			//溢れていることになるので、爆発します
			cout <<	"容量オーバー\n";
		}
	//容量を考えて入力します
	} while (tank < gas);

	//燃費　1L で何km 走れるのかを入力します
	//燃費がハイブリッド車は 70km / L だそうです
	cout << "燃費 : ";
	cin >> fire;

	//車のナンバーの入力を行います
	//全項目ではなく、大文字の4つの数字だけ簡潔に行います
	do {
		//4ケタの整数で受け付けます
		cout << "車のナンバー : ";
		cin >> num;

		//そのため、負の値や5ケタ以上は受け付けません
		if (num < 0 || num > 9999) {
			cout << "存在しません\n";
		}
	//入力のやり直しを要求します
	} while (num < 0 || num > 9999);

	int* buy = new int[3];		//購入年月日を入力するためにポインタを使います

	//クラスオブジェクトの年、月、日にポインタを割り振ります
	Date purch(*buy);

	//抽出子によって値を代入します
	cin >> purch;

	//これまで、入力された内容を1つにまとめます
	Car mine(name, wid, leng, hei, gas, num, fire, tank,purch);

	//基礎スペックを表示します
	mine.print_spec();

	// 変更点 メンバ関数を追加しました
	cout << "購入年月日 : ";
	cout << mine.opening_date();

	//現在地から好きなだけ移動します
	while (true) {

		//移動したときの現在地を表示します
		cout << "現在地 (" << mine.x() << "," << mine.y() << ")\n";

		//今の、燃料量を表示して移動距離を決めていきます
		cout << "残り燃料 : " << mine.fuel() << " \n";

		//移動するのかしないのか判断してください
		cout << "移動[0 NO / 1 YES] : ";

		int move;		//移動するのか　0 1 で答えてください
		cin >> move;

		//停車します
		if (move == 0) {

			//ループから抜け停車します
			break;
		}

		double dx, dy;		//	移動する距離を座標で出すための変数

		//東に何km進みましたか？
		cout << "X方向の移動距離 : ";
		cin >> dx;

		//北に何km進みましたか？
		cout << "Y方向の移動距離 : ";
		cin >> dy;

		//移動距離がわかりましたが本当に移動するのか判断します
		if (!mine.move(dx, dy)) {

			//移動したときの距離を表示します
			cout << "総移動距離" << mine.Total() << "km\n";
		}
	}

	//停車したときにもこれまで移動した距離を表示します。
	cout << "総移動距離" << mine.Total() << "km\n";

	return 0;
}
