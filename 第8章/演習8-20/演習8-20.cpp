// 演習8-20 2つの文字列を指すポインタを交換する関数を作成する
// 関数の使用は自分で決めること

#include<iostream>

using namespace std;

//ポインタのポインタを使って文字列を交換する関数
void swap_point(char**,char**);

int main()
{
	char* name1 = "HIRASAWA";	//ポインタによる文字列苗字で初期化
	char* name2 = "KEISUKE";	//ポインタによる文字列名前で初期化

	//文字列を表示し本当に交換されたのか確認するため表示する
	cout << "文字列 name1 : " << name1 << "\n" << "文字列 name2 : " << name2 << "\n";

	//関数を呼び出し文字列を交換する こちらの引数は 文字列の先頭要素のアドレスを与える
	swap_point(&name1,&name2);

	//文字列を表示し本当に交換されたのか確認するため表示する
	cout << "文字列 name1 : " << name1 << "\n" << "文字列 name2 : " << name2 << "\n";

	return 0;
}

//ポインタのポインタを使って文字列を交換する関数
void swap_point(char** sample1,char** sample2)
{
	// 関数宣言部分で＊＊ となっているため,通常は＊一つで
	//ポイントの指すオブジェクトを交換することになるが ＊＊のときの
	// ＊1つは アドレスを交換する意味にナル ＊＊でオブジェクトの交換にナル

	char* temp = *sample1;
	*sample1	= *sample2;
	*sample2	= *temp;
}
