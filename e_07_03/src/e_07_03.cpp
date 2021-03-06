/*
演習7-3 List6-16 関数sortを参照渡しからポインタを使った関数に変更

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 関数の宣言部分 中身は main文の後に記述
void sort(int*,int*,int*);

// 関数の宣言部分 中身は main文の後に記述
void swap(int*,int*);

int main()
{
	int x,y,z;	// 変数の定義 整数値ならば 特にルールはない

	// 整数値を読み込む部分 と 表示する部分
	cout << "整数を3個入力 : ";

	// 変数の値をキーボードからの値で代入する部分
	cin >> x >> y >> z;

	//比較する前に、変更前の値を並べます
	cout << "	並び替え前\n"
		<< x << " " << y << " " << z << "\n";

	// 関数の呼び出し部分 引数として変数のアドレスを渡している
	sort(&x,&y,&z);

	// 比較するために、変更後の昇順になった表示を行います
	cout << "	並び替え後\n"
		<< x << " " << y << " " << z << "\n";

	return 0;
}

//関数 3つの整数を昇順に並べ替える関数
//仮引数 main内の変数のアドレス x y z
//返却値 無し

void sort(int* a,int* b,int* c)
{
	//関数内部でsawp関数を呼び出している
	//if文の条件では ＊が付くことにより
	//アドレスからそのオブジェクトを見ることになっているため
	//アドレスではなく値そのものを比較している

	// 変数のオブジェクトが b の方が大きければ
	if(*a < *b) {

		// 変数のアドレスを関数に与え、交換します
		swap(a,b);
	}
	// 変数のオブジェクトが c の方が大きければ
	if(*b < *c) {

		// 変数のアドレスを関数に与え、交換します
		swap(b,c);
	}
	// 変数のオブジェクトが b の方が大きければ
	if(*a < *b) {

		// 変数のアドレスを関数に与え、交換します
		swap(a,b);
	}
}

//関数 2つの整数を並べ替える関数
//仮引数 別の関数で与えらえれている変数のアドレス a b
//返却値 無し

void swap(int* a,int* b)
{
	// 引数がアドレスなので a b のアドレスを値渡しで
	// 交換することになる
	int tmp = *a;		//変数に一時的にaのアドレスを保管します
	*a		= *b;		//アドレスを交換します
	*b		= tmp;		//bにtmpに保管されている a のアドレスを代入します
}
