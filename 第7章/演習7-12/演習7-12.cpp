// 演習7-12 要素数n の配列p の全要素に ｖを代入する関数の作成

#include<iostream>

using namespace std;

// 関数の宣言部分 中身は main文の後で記述
void fill(int* p,int n,int v);

int main()
{
	int a[10];// 空の配列を定義 キーボードから読み込むため初期化は不要

	// 配列の全要素を代入するため要素数分ループ処理を行う
	for(int i=0;i<10;i++){
		// 抽出子によりストリームを流れ 数値を読み込む
		cout << "a[" << i << "] : "; cin >> a[i];
	}

	// 要素数分ループ処理を行い、配列の数値を表示していく
	for(int i=0;i<10;i++) cout << "a[" << i << "] = " << a[i] << "\n";

	//関数の宣言部分 すべての要素を8で埋め尽くすことになる
	fill(a,10,8);

	// 要素数分ループ処理を行い、代入後の配列の数値を表示していく
	for(int i=0;i<10;i++) cout << "a[" << i << "] = " << a[i] << "\n";

	return 0;
}

void fill(int* p,int n,int v)
{
	//ポインタは初期は先頭を指しているので
	// 要素数分繰り返し処理を行うことで配列の全要素の代入できる
	while(n-- > 0) *p++ = v;
}
