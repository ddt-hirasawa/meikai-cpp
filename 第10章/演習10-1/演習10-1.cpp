#include<iostream>
#include<string>
#include"human.h"
#define data 20 // 名前の文字量

using namespace std;

void arrow(Human* p);

int main()
{
	// 人間クラス 簡易版

	string* name = new string;
	float* o = new float;
	float* t = new float;
	float plus,minus;

	cin >> *name >> *o >> * t;

	Human Keisuke(*name,*o,*t);

	cout << " 名前  体重  身長\n";

	arrow(&Keisuke);

	cout << "減量しました？";
	cin >> minus;

	Keisuke.genryou(minus);

	cout << " 名前  体重  身長\n";

	arrow(&Keisuke);

	cout << "増量しました？";
	cin >> plus;

	Keisuke.zouka(plus);

	cout << " 名前  体重  身長\n";

	arrow(&Keisuke);

	return 0;
}

void arrow(Human* p)
{
	cout << p->name() << " " << p->omosa() << " " << (*p).takasa() << "\n";
}
