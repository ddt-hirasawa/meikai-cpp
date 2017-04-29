// 演習3-5 テキスト List3-6 を改修して 読み込んだ値が１未満ならば改行しないように変更

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個*を表示しますか : "; cin >> n;

	int i=0;

	while(i < n){
		cout << '*';
		i++;
	}

	// 変更部分 入力された値が1より大きい場合のみ改行するように変更
	if(n > 1) cout << "\n";

	return 0;
}
