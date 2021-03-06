/*
 演習10-2 自動車クラスにデータメンバやメンバ関数を自由に追加せよ

 作成日 2017年5月9日

 作成者 平澤敬介
 */

#include<iostream>
#include<string>
#include<cmath>
#define empty 0

namespace {
double total_km = 0;			//総合距離
}

class Car {
	std::string Name;				// 車名
	int width, length, height, number;	// 車の幅、長さ、高さ、ナンバー
	double xp, yp;					// x座標 y座標
	double fuel_level;				// ガソリン
	double fire; 					// 燃費
	double tank;					// タンク容量

public:
	//デフォルトコンストラクタ
	Car();
	//コンストラクタ
	//車名　　車幅　　車高　　車長　　ガソリン　　ナンバー　　燃費　　タンク容量
	Car(std::string n, int w, int l, int h, double f, int num, double fire_,
			double tank_) {
		Name = n;			// 車名
		width = w;			// 車幅
		length = l;			// 車長
		height = h;			// 車高
		fuel_level = f;		// ガソリン
		number = num;		// ナンバー//
		fire = fire_;		// 燃費		//
		tank = tank_;		// タンク容量/

		xp = yp = 0;		// x座標 y座標
	}

	//メンバ関数 x座標を表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ x座標
	double x() {

		return xp;
	}

	//メンバ関数 y座標を表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ y座標
	double y() {

		return yp;
	}

	//メンバ関数 ガソリンを表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ ガソリン
	double fuel() {

		return fuel_level;
	}

	//メンバ関数 燃費を表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ 燃費
	double Fire() {

		return fire;
	}

	//メンバ関数 ナンバーを表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ ナンバー
	int num() {

		return number;
	}

	//メンバ関数 総移動距離を表示します
	//仮引数 無し
	//返却値 クラスのデータメンバ 総移動距離
	double Total() {

		return total_km;
	}

	//メンバ関数 データメンバを並べて表示します
	//仮引数 無し
	//返却値 無し
	void print_spec() {
		std::cout << "名前 : " << Name << "\n";
		std::cout << "車幅 : " << width << "mm\n";
		std::cout << "車長 : " << length << "mm\n";
		std::cout << "車高 : " << height << "mm\n";
		std::cout << "ナンバー : ";
		//関数呼び出し部分 ナンバーだけは別にします
		my_number();

	}

	//メンバ関数 ガソリンを満タンします
	//仮引数 無し
	//返却値 無し
	void plus_gas() {

		fuel_level += tank - fuel_level;	//満タンになるまで給油を行います
	}

	//メンバ関数 運転を続けるかどうか、判断します
	//仮引数 x座標 y座標
	//返却値 運転するか truw  運転しないか false

	bool move(double dx, double dy) {

		double dist = std::sqrt(dx * dx + dy * dy);		// 移動距離
		double gasoline = dist / fire;					// 移動したときのガソリン量
		int answer;										//給油を行うかどうかを判別します

		// まだガソリンがあるならば
		if (fuel_level > empty) {

			// 移動したときにガソリンが空になるようならば行う給油を行う
			if (fuel_level <= gasoline) {

				//現在.何Lガソリンが入っているか表示します
				std::cout << "現在ダンクに " << fuel_level << "L入っています。\n";

				//給油するか、しないか判断してください
				std::cout << "給油しますか？ Yes -> 1 No ->  0  \n";
				std::cin >> answer;

				//給油します
				if (answer == 1) {

					//通常は満タンがデフォルトです。
					std::cout << "満タンにします\n";

					//満タンになるまで給油を行います
					plus_gas();

					dist = (fuel_level * fire) * 2;	//給油して、落ち着いてから移動する距離を考えます

				//お金がありません
				} else {

					//ガソリンが買えません
					std::cout << "ガソリンが足りないので停車します。\n";

					//停車します
					dist = (fuel_level * fire) * 2;	//給油して、落ち着いてから移動する距離を考えます
				}
			}

			//移動距離が 今のガソリンの量で移動できる距離ならば
			if (dist < fuel_level * fire) {

				fuel_level -= gasoline;		//移動距離を反映させます
				total_km += dist;			//総合移動距離 とガソリン
				xp += dx;					//x y 軸の移動を行います
				yp += dy;					//移動できる距離のときのみ、移動します

				//移動したとき、どれくらい移動したのか表示します
				std::cout << "総移動距離 " << total_km << "km\n";

				//まだ、運転できます
				return true;

				//移動距離する距離が長すぎます。
			} else {

				//車での移動は控えるべきです
				std::cout << "移動手段の変更をお勧めします\n";
			}
		}

		//もう、運転できません
		return false;
	}

	//メンバ関数 車のナンバーを表示する
	//仮引数 無し
	//返却値 無し

	void my_number() {

		int set[4] = { 0 };		//車のナンバーを表示するために4ケタの値を配列に各桁の値を補完します

		//車のナンバーは 12 - 34 となっているため（必ず4ケタになると仮定）
		for (int i = 0; i < 4; i++) {

			//想定される値は 0000 ～ 9999 としての処理を行っていきます
			//整数型で入力された値を10で割っていき余りを配列に格納する
			set[i] = number % 10;
			number /= 10;
		}

		//ナンバーをすべて表示させるためループ処理を行います
		for (int i = 3; i >= 0; i--) {

			//1ケタずつ表示していきます
			std::cout << set[i];

			//コンソールに表示するとき 2桁目の後に- を表示させるようにする
			if (i == 2) {
				std::cout << "-";
			}
			//表示が終わったなら改行しておく
			if (i == 0) {
				std::cout << "\n";
			}
		}
	}
};
