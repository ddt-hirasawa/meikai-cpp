// 演習8-17 2つの文字列をそっくり入れ替える関数を作成する

#include<iostream>
// 文字列の処理を行うライブラリ
#include<cstring>

using namespace std;

// 文字列を交換する関数の宣言
void swap_string(char*,char*);

int main()
{
	char name1[] = "KEISUKE_HIRA"; //交換する文字列にそれぞれ自分の
	char name2[] = "HIRASAWA";		//名前と苗字を入れ初期化する

	//交換前の文字列をそれぞれ改行して表示しコンソールで比較する
	cout << "tmp1 : " << name1 << "\n"
		<< "tmp2 : " << name2 << "\n";

		//	文字列を交換する宣言
	cout << "文字列の反転\n";

		// 関数の呼び出し 呼び出し後、文字列が入れ替わる
	swap_string(name1,name2);

		//	交換後の文字列を出力し 交換できているか確認する
	cout << "tmp1 : " << name1 << "\n"
		<< "tmp2 : " << name2 << "\n";

	return 0;
}

 // 文字列を交換する関数
void swap_string(char* a,char* b)
{
	int len1 = strlen(a);		//文字列 aの要素数を出す
	int len2 = strlen(b);		//文字列 bの要素数を出す

	char tmp[20];				// コピー用の配列を仮に用意する
								//	前提が名前や苗字なので十分
	// 文字列 a を tmp にコピーしswap処理を行う
	strcpy(tmp,a);

	//文字列 a を 文字列 b に1文字ずつ置き換えていく。
	for(int i=0;i < len2;i++)	*(a+i) = *(b+i);

	//文字列 b の最大の要素にナル文字を置くことで文字列を区切る
	*(a+len2) = '\0';

	//文字列 b を 文字列 tmp に1文字ずつ置き換えていく。
	for(int i=0;i < len1;i++)	*(b+i) = tmp[i];

		//文字列 a の最大の要素にナル文字を置くことで文字列を区切る
	*(b+len1) = '\0';
}
