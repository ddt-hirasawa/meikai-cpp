/*
 演習9-5 配列の全要素を比較して最小値を返却する関数 と const char* 型に特殊化した関数を作ること

 作成日 2017年5月9日

 作成者 平澤敬介
 */

#include <iostream>

//	文字列を比較する関数を使うため ライブラリを読み込む
#include<cstring>

using namespace std;

#define data 10	// 配列で使うデータの要素数を10とし、与えられた10個の値 文字列を比較してみる

//関数テンプレートの宣言
//数値の値を比較し最小値を求めるための関数
template<class Type>
Type minof(const Type x[], int n);

//const char* 型に特殊化した関数テンプレートの宣言
//文字列を比較して最小の文字列を求める
template<>
const char* minof(const char* const x[], int n);

int main() {
	int math[data];			//	入力される値は限定されるからポインタの必要なし
	char* moji[data];			//	ポインタによる多次元文字列 文字列の量が未知数だから

	// 宣言 数字の入力部分
	cout << "数字\n";

	// 配列の要素数分のループで要素を埋めていきます
	for (int i = 0; i < data; i++) {

		//配列に数字を格納していく処理
		cout << i + 1 << " : ";

		//配列に値を入力して埋めていきます
		cin >> math[i];
	}

	//宣言 文字列の入力部分
	cout << "文字列\n";

	// 配列の要素数分のループで要素を埋めていきます
	for (int i = 0; i < data; i++) {

		//配列に数字を格納していく処理
		cout << i + 1 << " : ";

		//ポインタの指すアドレスからナル文字を引いた15文字を格納できるメモリを確保している
		moji[i] = new char[16];

		//配列に文字列を入力して埋めていきます
		cin >> moji[i];
	}

	// 数字の最小値と
	cout << "整数の最小値   " << minof(math, data) << "です\n";

	// 最小の文字列を正常に出力されるか確認する
	cout << "文字列の最小値 " << minof<const char *>(moji, data) << "です\n";
}

//関数テンプレートの宣言
//関数 数値の値を比較し最小値を求めます
//仮引数 実数の型の配列 とその配列の要素数
//返却値 仮引数で与えられた配列の型の実数値

template<class Type>
Type minof(const Type x[], int n) {
	int min = 0;			//配列の先頭を最小値として処理を行っていく

	//要素数分、配列の値を見比べたいので端から端まで見ます
	for (int i = 0; i < n; i++) {

		//配列の値を比べ、小さい値があったとき
		if (x[min] > x[i])

			//min を 最小値がある配列の番号に置き換える
			//直接 配列の値を置き換えるのは NG
			min = i;

	}
	return x[min];
}

//const char* 型に特殊化した関数テンプレートの宣言
//関数 文字列を比較し最小値を求めます
//仮引数 文字列の配列 とその配列の要素数
//返却値 仮引数で与えられた文字列の最小値

template<>//文字列を比較して最小の文字列を求める
const char* minof(const char* const x[], int n) {
	int min = 0;

	//配列の先頭を最小値として処理を行っていく
	for (int i = 0; i < n; i++) {

		//配列の値を比べ、小さい値があったとき
		if (strcmp(x[min], x[i]) > 0) {

			//min を 最小値がある配列の番号に置き換える
			//直接 配列の値を置き換えるのは NG
			min = i;
		}
	}
	return x[min];
}
