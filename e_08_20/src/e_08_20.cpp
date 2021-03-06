/*
演習8-20 2つの文字列を指すポインタを交換する関数を作成する 関数の使用は自分で決めること

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

//ポインタのポインタを使って文字列を交換する関数
void swap_point(const char** sample1,const char** sample2);

int main()
{
	const char* name1 = "HIRASAWA";	//ポインタによる文字列苗字で初期化
	const char* name2 = "KEISUKE";	//ポインタによる文字列名前で初期化

	//文字列を表示し本当に交換されたのか確認するため表示する
	cout << "文字列 name1 : " << name1 << "\n" << "文字列 name2 : " << name2 << "\n";

	//関数を呼び出し文字列を交換する こちらの引数は 文字列の先頭要素のアドレスを与える
	swap_point(&name1,&name2);

	//文字列を表示し本当に交換されたのか確認するため表示する
	cout << "文字列 name1 : " << name1 << "\n" << "文字列 name2 : " << name2 << "\n";

	return 0;
}

//関数 ポインタのポインタを使って文字列を交換する
//仮引数 文字列のポインタのポインタ sample1 sample2
//返却値 無し

void swap_point(const char** sample1,const char** sample2)
{
	// 関数宣言部分で＊＊ となっているため,通常は＊一つで
	//ポイントの指すオブジェクトを交換することになるが ＊＊のときの
	// ＊1つは アドレスを交換する意味にナル ＊＊でオブジェクトの交換にナル

	const char* temp = *sample1;	//オブジェクトの値を変えるわけではないので const char* で変数を宣言します
	*sample1	= *sample2;			//sample1 のアドレスを sample2 のアドレスに更新します
	*sample2	= temp;				//sample2 のアドレスは 保管しておいたsample1の元のアドレスを代入します
}
