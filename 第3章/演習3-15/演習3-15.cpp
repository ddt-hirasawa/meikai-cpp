// 演習3-15 List 3-12 を書き換え 約数の個数を表示するようにする

#include<iostream>

using namespace std;
int main()
{
	int n;

	//変更点 変数追加 約数を見つけたときにカウントしていく
	int num = 0;
	//
	cout << "整数値 :";
	cin >> n;

	for(int i=1;i<=n;i++){
		if(n%i == 0){
			cout << i << "\n";
			// 変更点 for文の外で変数を定義しているので
			// 値は 加算されていく
			++num;
		}
	}

	// 変更点 約数の数を表示する for文を通過したために num = 0ではなくなっている
	cout << "約数は" << num << "個です。";

	return 0;
}
