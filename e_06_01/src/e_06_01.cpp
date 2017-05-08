/*
演習 6-1 正の値 負の値 0 で それぞれ 1 -1 0 をそれぞれ返却する関数を作成する

作成日 2017年5月7日

作成日 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言 main文の後で関数文を書くために必要
int sign_of(int x);

int main()
{
	int n;	// 変数の定義 ここに代入される値を判別します

	// 宣言 入力を促します
	cout << "入力した数字に対し-1～1の数字を返却します。\n"
			<< "入力 : ";

	// キーボードからの値を n に代入します
	cin >> n;

	// 関数呼び出し部分 変数i に関数の値が代入される
	int answer = sign_of(n);

	// 関数で判別された値を判断します 1 -> 正 -1 -> 負 0 -> 零
	cout << answer;

	return 0;
}

// 符号により 返却する値を変える関数
// 仮引数 x で符号の判別を行う
// 返却値 answer に符号別で数字の代入を行い返却する

int sign_of(int x)
{
	int answer = 0;		// 返却する変数を定義します。必ずいずれかの代入が行われます

	// x が0より大きいとき
	if(0 < x) {
		// 1を代入し
		answer += 1;
	// x が0より小さければ
	} else if(x < 0) {
		// -1 を代入し
		answer += -1;
	// それ以外ならば
	} else if(x == 0){
		// 0を代入します
		answer += 0;
	}

	// ここまでで代入された値を返却します
	return answer;
}
