/*
演習9-8 演習9-7で名前空間メンバの定義と宣言を分離する

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//English名前空間 の中で
//変数と関数の宣言のみを行っているので
//ソースを見やすくなっている
namespace English{
	int x = 1;
	void print_x();
	void hello();
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
	void hello();
	}
}

int main()
{
	//名前空間 英国人
	cout << "English::x = " << English::x << "\n";
	English::print_x();
	English::hello();

	//名前空間 日本人
	cout << "Japanese::x = " << Japanese::x << "\n";
	Japanese::print_x();
	Japanese::hello();

	//名前空間 日本人の中の大阪人
	cout << "Japanese::Osaka::x = " << Japanese::Osaka::x << "\n";
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();

	return 0;
}

//それぞれの名前空間の関数を同じソースファイル上で定義している
//名前空間を関数の前に必ずつけなければならない

//関数 同じ名前空間の変数の値を表示します
//仮引数 無し
//返却値 無し

void English::print_x()
{
	//変数の値を表示 それぞれの言語で
	cout << "The vslue of x is " << x << " .\n";
}

//関数 同じ名前空間のあいさつを表示します
//仮引数 無し
//返却値 無し

void English::hello()
{
	//その国の挨拶を表示します
	cout << "Hello!\n";
}

//関数 同じ名前空間の変数の値を表示します
//仮引数 無し
//返却値 無し

void Japanese::print_x()
{
	//変数の値を表示 それぞれの言語で
	cout << "変数値 x は " << x << " です\n";
}

//関数 同じ名前空間のあいさつを表示します
//仮引数 無し
//返却値 無し

void Japanese::hello()
{
	//その国の挨拶を表示します
	cout << "こんにちは!\n";
}

//関数 同じ名前空間の変数の値を表示します
//仮引数 無し
//返却値 無し

void Japanese::Osaka::print_x()
{
	//変数の値を表示 それぞれの言語で
	cout << "変数値 x は " << x << " でっせ\n";
}

//関数 同じ名前空間のあいさつを表示します
//仮引数 無し
//返却値 無し

void Japanese::Osaka::hello()
{
	//その国の挨拶を表示します
	cout << "もうかってまっか？\n";
}
