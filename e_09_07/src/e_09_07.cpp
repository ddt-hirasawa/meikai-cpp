/*
演習9-7 名前空間JAPANESE の中に OSAKA を作り変数と関数helloを追加する

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 名前空間 English
namespace English{

	int x = 1;		//English 内で変数を定義 ほかの名前空間と干渉しません

	//関数 同じ名前空間の変数の値を表示します
	//仮引数 無し
	//返却値 無し

	void print_x()
	{
		//変数の値を表示 それぞれの言語で
		cout << "The vslue of x is " << x << " .\n";
	}

	//関数 同じ名前空間のあいさつを表示します
	//仮引数 無し
	//返却値 無し

	void hello()
	{
		//その国の挨拶を表示します
		cout << "Hello!\n";
	}
}

// 名前空間 Japanese
namespace Japanese{

	int x = 2;		//Japanese 内で変数を定義 ほかの名前空間と干渉しません

	//関数 同じ名前空間の変数の値を表示します
	//仮引数 無し
	//返却値 無し

	void print_x()
	{
		//変数の値を表示 それぞれの言語で
		cout << "変数値 x は " << x << " です\n";
	}

	//関数 同じ名前空間のあいさつを表示します
	//仮引数 無し
	//返却値 無し

	void hello()
	{
		//その国の挨拶を表示します
		cout << "こんにちは!\n";
	}

	//		変更点
	//Japanese名前空間の中にOsaka名前空間を作り
	//その中で変数と関数を定義する
	//日本の中でも大阪は別物
	namespace Osaka{

		int x = 1;		//Osaka 内で変数を定義 ほかの名前空間と干渉しません


		//関数 同じ名前空間の変数の値を表示します
		//仮引数 無し
		//返却値 無し

		void print_x()
		{
			//変数の値を表示 それぞれの言語で
			cout << "変数値 x は " << x << " でっせ\n";
		}

		//関数 同じ名前空間のあいさつを表示します
		//仮引数 無し
		//返却値 無し

		void hello()
		{
			//その国の挨拶を表示します
			cout << "もうかってまっか？\n";
		}
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

	//名前空間 大阪人 日本人とは違う
	// 変更点
	//Osaka::printx() は NG
	//Japanese::Osaka::printx() OK
	// 名前空間の中の名前空間を使う
	cout << "Japanese::Osaka::x = " << Japanese::Osaka::x << "\n";//
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();



	return 0;
}
