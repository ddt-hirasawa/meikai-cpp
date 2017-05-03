#include<iostream>
#include"Car.h"

using namespace std;

int main()
{
	string name;
	int wid,leng,hei,num;
	double gas,tank,fire;

	cout << "車のデータを入力\n";
	cout << "車名 : ";
	cin >> name;
	cout << "車幅 : ";
	cin >> wid;
	cout << "車長 : ";
	cin >> leng;
	cout << "車高 : ";
	cin >> hei;
	cout << "タンク容量 : ";
	cin >> tank;
	do{
	cout << "残り燃料 : ";
	cin >> gas;
	if(tank < gas)
		cout << "容量オーバー\n";
	}while(tank < gas);
	cout << "燃費 : ";
	cin >> fire;

	do{
	cout << "車のナンバー : ";
	cin >> num;
	if(num < 0 || num > 9999)
		cout << "存在しません\n";
	}while(num < 0 || num > 9999);

	Car mine(name,wid,leng,hei,gas,num,fire,tank);

	mine.print_spec();

	while(true){
		cout << "現在地 (" << mine.x() << "," << mine.y() << ")\n";
		cout << "残り燃料 : " << mine.fuel() << " \n";
		cout << "移動[0 NO / 1 YES] : ";
		int move;
		cin >> move;
		if(move == 0) break;

		double dx,dy;

		cout << "X方向の移動距離 : "; cin >> dx;
		cout << "Y方向の移動距離 : "; cin >> dy;

		if(!mine.move(dx,dy))
			cout << "総移動距離" << mine.Total() << "km";
	}
	cout << "総移動距離" << mine.Total() << "km";

	return 0;
}
