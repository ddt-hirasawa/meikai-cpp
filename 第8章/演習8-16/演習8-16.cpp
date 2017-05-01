//演習8-16 文字列中の数字文字を削除する関数を作成する

#include<iostream>
 // 文字列処理のためのライブラリ
#include<cstring>

using namespace std;

// 数字文字を取り除く処理を行う関数の宣言
char* strrmv_digits(char*);

int main()
{
	char sample[] = "H3I32RA43SA342WA43_K23EI23SU53KE";// 文字列として名前を使い
														// それに数字文字を含ませている

	// 取り除く処理を行う前の文字列の表紙
	cout << "文字列 sample : " << sample << "\n";

	// 関数を使用する宣言を行う
	cout << "数字文字を取り除く\n";

	// 関数を呼び出し 数字を取り除く処理を行う　hirasawa keisuke
	cout << "文字列 sample : " << strrmv_digits(sample) << "\n";

	return 0;
}

// 数字文字を取り除く処理を行う関数
char* strrmv_digits(char* tmp)
{

	int len = strlen(tmp);		//数字を取り除く文字列の要素数を出す

	//文字列のナル文字まで走査するためループ処理を行う
	for(int i=0;i < len;i++){
			//数字文字 0 ～ 9 を発見したとき
		if(*(tmp+i) >= '0' && *(tmp+i) <= '9'){
			// それ以降の文字を１つ後ろの文字列に更新する
			for(int j=i;j < len;j++){
				*(tmp+j) = *(tmp+j+1);			//
			}									//if文が呼び出され、文字列の更新が終わったならば
			i--;								//1つ前の文字列から再スタートする
		}								//これがなければ連続して数字文字がある場合
	}									//取り出しきれずに残ってしまう。
	return tmp;						// 取り除き終わった値を返却する
}
