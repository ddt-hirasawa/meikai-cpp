#include<iostream>
#include<string>
#include<cmath>
#define empty 0

namespace
{
	double total_km = 0;
}

class Car{
	std::string Name;	// 車名
	int width,length,height,number;// 車の幅、長さ、高さ、ナンバー
	double xp,yp;		// x座標 y座標
	double fuel_level;		// ガソリン
	double fire; 		// 燃費
	double tank;		// タンク容量

public:
	Car();
	Car(std::string n,int w,int l,int h,double f,int num,double fire_,double tank_){
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
	double x() {return xp;}
	double y() {return yp;}
	double fuel(){return fuel_level;}
	double Fire(){ return fire; }			// 燃費 関数
	int num() { return number;}
	double Total() {return total_km;}

	void print_spec(){
		std::cout << "名前 : " << Name << "\n";
		std::cout << "車幅 : " << width << "mm\n";
		std::cout << "車長 : " << length << "mm\n";
		std::cout << "車高 : " << height << "mm\n";
		std::cout << "ナンバー : ";
		my_number();

	}

	void plus_gas(double tmp)		//
	{									// tmp文のガソリンを給油する関数
		do{								//ただし、給油量がタンク容量を超えた場合
		fuel_level += tmp;				//給油はやり直すことになる
		if(fuel_level > tank){			//
			std::cout << "容量オーバー\n";//容量以下で給油できたのならば処理を終わる
		}else							//
			std::cout << tmp << "L 給油しました\n";
		}while(fuel_level > tank);
	}

	bool move(double dx,double dy){

		double dist = std::sqrt(dx*dx + dy*dy);// 移動距離
		double gasolin = dist / fire;			// 移動したときのガソリン量

	if(tank > gasolin){
		if(fuel_level - gasolin <= empty){ // 移動したときにガソリンが空になるようならば行う処理

			int plus;
			std::cout << "現在ダンクに " << fuel_level << "L入っています。\n";
			std::cout << "ガソリンが切れます\n" << "何L給油しますか?";
			std::cin >> plus;
			plus_gas(plus);

				if(dist < fuel_level * fire){
					std::cout << "総移動距離 " << total_km << "km\n";
					int answer;
					std::cout << "走行を続行 -> 1 / 中断 -> 0\n";
					std::cin >> answer;
					if(answer == 0){
						std::cout << "総移動距離 " << total_km << "km\n";
						return false;
					}else{
						return true;
					}
				}else
					goto Exit;

		}else{
			Exit:
			;
			fuel_level -= gasolin;
			total_km += dist;
			xp += dx;
			yp += dy;
			return true;
		}
	}else{
		return false;
	}
	}

	void my_number(){			//
		int set[4] = {0};		//車のナンバーを表示する関数
		for(int i=0;i < 4;i++){//車のナンバーは 12 - 34 となっているため
			set[i] = number % 10;//（必ず4ケタになると仮定）
			number /= 10;		//想定される値は 0000 ～ 9999 としての処理を
		}						//行っていく。整数型で入力された値を
		for(int i=3;i>=0;i--){	//10で割っていき余りを配列に格納し
			std::cout << set[i];//コンソールに表示するとき 2桁目の後に
			if(i == 2)			// - を表示させるようにする
				std::cout<< "-";//
			if(i == 0)			//
				std::cout << "\n";//
		}
	}
};
