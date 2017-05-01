//演習7-7 要素数n の配列から要素 a[idx] を削除する関数を作成する
// 後方の要素を前方に1つずらすことによって行う

#include<iostream>

using namespace std;

// 関数の宣言 仮引数として 配列 要素数 削除する配列の番号を与える
void arymv(int a[],int n,int idx);

int main()
{
	int a[10] = {1,3,4,7,9,11};// 配列の要素を初期化する

	// 削除前の配列を表示するために要素数分ループ処理を行う
	for(int i=0;i < 6;i++){
	if(i == 0)
		cout << "{ ";
	if(i >= 0)
		cout << a[i];
	if(i < 10)
		cout << " ,";
	}
	cout << " }\n";

	// 関数呼び出し部分 配列の2番目の要素を削除し前に詰める処理を行う
	arymv(a,6,2);

	// 削除後の配列を表示するために要素数分ループ処理を行う
	for(int i=0;i < 6;i++){
	if(i == 0)
		cout << "{ ";
	if(i >= 0)
		cout << a[i];
	if(i < 6)
		cout << " ,";
	}
	cout << " }\n";

	return 0;
}

// 前方に詰める削除関数の宣言
void arymv(int a[],int n,int idx)
{
	//削除する番号から最大要素までを走査するためにループ処理を行う
	for(int i=idx;i < n;i++){
		// if文は配列の最後の要素を変更しないために必要
		if(i < n-1)
		// 今指しているオブジェクトを１つ後ろのオブジェクトに更新していく
		*(a+i) = *(a+i+1);
	}
}
