// 演習7-9 要素数nの配列aのa[idx]にxを挿入する関数を作成する

#include<iostream>

using namespace std;

// 仮引数として 配列 要素数 先頭要素の番号 挿入する数字を与える
void aryins(int a[],int n,int idx,int x);

int main()
{
	int a[10] = {1,3,4,7,9,11,13,15,17,19};// 関数に使う配列を定義する 指定した配列の値のみを変更する

	// 削除前の配列を表示するために要素数分ループ処理を行う
	for(int i=0;i < 10;i++){
	if(i == 0)
		cout << "{ ";
	if(i >= 0)
		cout << a[i];
	if(i < 10)
		cout << " ,";
	}
	cout << " }\n";

	// 関数呼び出し部分 3番目の要素を 99に変更する 3番目の要素は押し出されるため
	// ループ処理が必要になる
	aryins(a,10,3,99);

	// 削除後の配列を表示するために要素数分ループ処理を行う
	for(int i=0;i < 10;i++){
	if(i == 0)
		cout << "{ ";
	if(i >= 0)
		cout << a[i];
	if(i < 10)
		cout << " ,";
	}
	cout << " }\n";

	return 0;
}

//  要素数nの配列aのa[idx]にxを挿入する関数
void aryins(int a[],int n,int idx,int x)
{
	//配列の最後尾から先頭要素までループ処理を行う
	//このループのうちに挿入を行ってしまうと
	// 値が更新されてしまうためループ後に挿入を行う
	for(int i=n;i > idx;i--)
		*(a+i) = *(a+i-1);
	// 配列のidx番目のオブジェクトに ｘを代入する
	*(a+idx) = x;
}
