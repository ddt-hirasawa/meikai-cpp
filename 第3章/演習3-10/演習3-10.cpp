// 演習3-10 演習3-9 を変更し カウントアップするように変更

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "カウントアップします";

	do{
		cout << "正の整数値 :";
		cin >> n;
	}while(n <= 0);

	// 変更点 for文で i = 0 に変更し
	// デクリメントからインクリメントに変更している
	// これでカウントアップするように変更される
	for(int i=0;i <= n;i++)
		cout << i << "\n";
	return 0;
}
