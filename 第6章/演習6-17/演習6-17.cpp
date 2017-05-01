//演習6-17 関数を呼び出した回数をカウントする関数を作成する

#include<iostream>

using namespace std;

// 関数の宣言 この関数を呼び出した回数をカウントしていく
void put_count();

// 静的記憶域期間で変数を定義する 動的記憶域期間では値がリセットされてしまう
int i = 1;

int main()
{

	int n;// カウントする回数を決めるため変数を定義する
	cout << "何回 : "; cin >> n;

	// 入力した回数分関数を呼び出すためにループ処理を行う
	for(int i=0;i < n;i++) put_count();

	return 0;
}

// 引数もなし、返却も行わない関数を作成して挙動を確認する
void put_count()
{
	//回数を表示した後 インクリメントする
	// 関数内部で変数を定義すると関数を呼び出し終わったとき
	// 値がリセットされてしまう
	cout << "put_count : " << i << " 回目\n"; i++;
}
