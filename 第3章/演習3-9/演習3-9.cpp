// 演習3-9 List3-4 for文に書き換え同じ動作をするようにする

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "カウントダウンします";

	do{
		cout << "正の整数値 :";
		cin >> n;
	}while(n <= 0);

	// 変更点 for文で i をデクリメントしながら表示を行う
	// while文とほぼ同じ動作をする
	for(int i=n;i >= 0;i--)
		cout << i << "\n";

	return 0;
}
