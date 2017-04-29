// 演習3-12 演習3-11 を改修して 加算されていく過程を表示する

#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cout << "1からnまでの和を求めます。";

	do{
		cout << "正の整数値 :";
		cin >> n;
	}while(n <= 0);

	// 変更点 演習3-11 を変え sum に加算する前に
	// i + を n -1 まで行う
	for(int i=1;i < n;i++){
		cout << i << " + ";
		sum += i;
	}

	// 変更点 for 文の外で n-1 まで加算されているので n の値を sum に加算する
	sum += n;
	// 変更点 最大値と合計を過程となるように表示する
	cout << n << " = " << sum;

	return 0;
}
