// 演習4-11 float型で 0～１まで　0.001ずつ加算していき その2乗値を一緒に表示する

#include<iostream>

// setw操作子を使うためのライブラリ 必ず必要ではない
#include<iomanip>

using namespace std;

int main()
{
	// 単なる宣言 x と x＊x を並べて表示していく
	cout << "     x          xの2乗\n";

	// float型で 0.001ずつ加算していくため for文のループを行う
	for(float x = 0.0F;x <= 1.0F;x += 0.001F)
		// 加算していく様子とその2乗値を表示する
		cout << setw(7) << x << "      " << setw(7) << x*x << "\n";

	return 0;
}
