// 演習9-7 名前空間JAPANESE の中に OSAKA を作り変数と関数helloを追加する

#include<iostream>

using namespace std;

// 名前空間 English
namespace English{

	int x = 1;

	void print_x()
	{
		cout << "The vslue of x is " << x << " .\n";
	}
	void hello()
	{
		cout << "Hello!\n";
	}
}

// 名前空間 Japanese
namespace Japanese{

	int x = 2;

	void print_x()
	{
		cout << "変数値 x は " << x << " です\n";
	}
	void hello()
	{
		cout << "こんにちは!\n";
	}

	//		変更点
	//Japanese名前空間の中にOsaka名前空間を作り
	//その中で変数と関数を定義する
	//日本の中でも大阪は別物
	namespace Osaka{

		int x = 1;								//

		void print_x()							//
		{
			cout << "変数値 x は " << x << " でっせ\n";
		}
		void hello()
		{
			cout << "もうかってまっか？\n";
		}
	}
}

int main()
{
	cout << "English::x = " << English::x << "\n";
	English::print_x();
	English::hello();

	cout << "Japanese::x = " << Japanese::x << "\n";
	Japanese::print_x();
	Japanese::hello();

	// 変更点
	//Osaka::printx() は NG
	//Japanese::Osaka::printx() OK
	// 名前空間の中の名前空間を使う
	cout << "Japanese::Osaka::x = " << Japanese::Osaka::x << "\n";//
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();



	return 0;
}
