// 演習9-8 演習9-7で名前空間メンバの定義と宣言を分離する

#include<iostream>

using namespace std;

//English名前空間 の中で
//変数と関数の宣言のみを行っているので
//ソースを見やすくなっている

namespace English{
	int x = 1;
	void print_x();
	void hello();	//
}

///Japanese名前空間 の中で
//変数と関数の宣言のみを行っているので
//ソースを見やすくなっている

namespace Japanese{
	int x = 2;
	void print_x();
	void hello();//

	//Japanese::Osaka名前空間 の中で
	//変数と関数の宣言のみを行っているので
	//ソースを見やすくなっている

	namespace Osaka{
	int x = 1;
	void print_x();
	void hello();			//
	}						//
}

int main()				//	呼び出し部分は変更なしで実行できる
{
	cout << "English::x = " << English::x << "\n";
	English::print_x();
	English::hello();

	cout << "Japanese::x = " << Japanese::x << "\n";
	Japanese::print_x();
	Japanese::hello();

	cout << "Japanese::Osaka::x = " << Japanese::Osaka::x << "\n";
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();

	return 0;
}

//それぞれの名前空間の関数を同じソースファイル上で定義している
//名前空間を関数の前に必ずつけなければならない

void English::print_x()
{
	cout << "The vslue of x is " << x << " .\n";
}
void English::hello()
{
	cout << "Hello!\n";
}

void Japanese::print_x()
{
	cout << "変数値 x は " << x << " です\n";
}
void Japanese::hello()
{
	cout << "こんにちは!\n";
}

void Japanese::Osaka::print_x()
{
	cout << "変数値 x は " << x << " でっせ\n";
}
void Japanese::Osaka::hello()
{
	cout << "もうかってまっか？\n";
}
