// 演習3-22 逆ピラミッドで ＊ だった表示を その行を １０で割った余りにする

#include<iostream>

using namespace std;

int main()
{
	int n;// 変数の定義 ピラミッドの段数になる

	cout << "ピラミッドを表示(変更版)\n";

	cout << "段数 :"; cin >> n;

	//　ピラミッドの段数分表示を行うためのループ処理
	for(int i=1;i<=n;i++){

		// 逆ピラミッドなので、左下直角三角形を作る分空白を表示する
		for(int j=1;j<i;j++) cout << " ";

		// 表示する値は 10 で割った余りとなり,表示する良は 初段で最大になるようにする
		for(int j=2*(n-i);j>=0;j--) cout << i%10;


		cout << "\n";
	}
	return 0;
}
