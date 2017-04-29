// 演習 3-21 ピラミッドを作る課題

#include<iostream>

using namespace std;

int main()
{
	int n;// 変数の定義 ピラミッドの段数

	cout << "ピラミッドを表示\n";

	cout << "段数 :"; cin >> n;

	// ピラミッドの段数分表示を行うためのループ
	for(int i=1;i<=n;i++){

		// ピラミッドを表示させるため,空白文字で * の表示を調整する
		// 空白文字で 左上直角三角形を作るためのループ
		for(int j=n-i;j>0;j--) cout << " ";

		// 段数によって 1 3 5 7 と奇数で表示が増加していく
		// そのため * の表示は 2*i-1 分となる
		for(int j=1;j<=2*i-1;j++) cout << "*";
		cout << "\n";
	}
	return 0;
}
