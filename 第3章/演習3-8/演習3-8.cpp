// 演習3-8 List 3-10 を書き換え 読み込んだ値が1未満なら改行しないようにする

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個*を表示しますか : ";
	cin >> n;

	for(int i=0;i<n;i++)
		cout << '*';

	// 変更点 入力された n が 1 より大きければ改行する
	if(n > 1)

	cout << "\n";

	return 0;
}
