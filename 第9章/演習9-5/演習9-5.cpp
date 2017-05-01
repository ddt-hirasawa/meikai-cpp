//演習9-5 配列の全要素の最小値を返却する関数テンプレートの作成

#include <iostream>

//	文字列を比較する関数を使うため ライブラリを読み込む
#include<cstring>

using namespace std;

// 配列で使うデータの要素数を10とし、与えられた10個の値 文字列を比較してみる
#define data 10

//関数テンプレートの宣言
//数値の値を比較し最小値を求めるための
template <class Type>
Type minof(const Type x[],int n);

//const char* 型に特殊化した関数テンプレートの宣言
//文字列を比較して最小の文字列を求める
template <>
const char* minof(const char* const x[],int n);

int main()
{
	int a[data];			//	入力される値は限定されるからポインタの必要なし
	char* s[data];			//	ポインタによる多次元文字列 文字列の量が未知数だから

	cout << "数字\n";

	//配列に数字を格納していく処理 配列の最大値までループ処理を行う
	// 配列への入力部分 整数部分
	for(int i = 0; i < data; i++){
		cout << i + 1 << " : "; cin >> a[i];
		}

	// 配列への入力部分 文字列部分
	cout << "文字列\n";
	for(int i = 0; i < data; i++){
			// 文字列を格納していく処理
		cout << i + 1 << " : ";
		////	ポインタの指すアドレスからナル文字を引いた
		//15文字を格納できるメモリを確保している
		s[i]=new char[16];
		cin >> s[i];
		}

	// 数字の最小値と 最小の文字列を正常に出力されるか確認する
		cout << "整数の最小値   " << minof(a, data) << "です\n";
		cout << "文字列の最小値 " << minof<const char *>(s, data) << "です\n";
}

//関数テンプレートの宣言
//数値の値を比較し最小値を求めるための
template <class Type>
Type minof(const Type x[],int n)
{
	int min = 0;			//配列の先頭を最小値として処理を行っていく
	int i = 1;				//カウント 今どの配列の部分を指しているのか知るため

	// ナル文字まで走査することで全文字列を見ることができる
	while(n-- != 1){//
		//配列の値を比べ、小さい値があったときmin を 最小値がある配列の番号に置き換える
		if(x[min] > x[i])
			min = i;
		i++;
	}
		return x[min];
}

//const char* 型に特殊化した関数テンプレートの宣言
//文字列を比較して最小の文字列を求める
template <>
const char* minof(const char* const x[],int n)
{
	int min = 0;			//配列の先頭を最小値として処理を行っていく
	int i= 1;				//カウント 今どの配列の部分を指しているのか知るため

	// ナル文字まで走査することで全文字列を見ることができる
	while(n-- != 1){
		//配列の値を比べ、小さい値があったときmin を 最小値がある配列の番号に置き換える
		if(strcmp(x[min], x[i]) > 0)
			min = i;
		i++;
	}
		return x[min];
}
