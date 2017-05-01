//演習8－10 ヘッダcstring で定義されている strcat strncat と同等の関数を自作する

#include<iostream>	// 入出力のヘッダ

using namespace std;// 名前空間の指定

char* my_strcat(char*,const char*);			// 文字列を連結する関数の宣言
char* my_strncat(char*,const char*,int);  // 文字列を長さを指定して連結する関数の宣言

int main()
{
	char name1[30] = "HIRASAWA_";		// strcat この文字列に連結する
	char name2[30] = "KEISUKE";			// strcat この文字列を連結する
	char name3[30] = "HIRASAWA_";		// strncat この文字列に連結する
	char name4[30] = "KEISUKE";			// strncat この文字列を連結する
	int n = 3;							// 長さ指定 ３文字のみ連結する

			// 連結前の文字列をそれぞれ表示する hirasawa keisuke
	cout << "文字列 name1 " << name1 << "\n"
			<< "文字列 name2 " << name2 << "\n";	//

	cout << "文字列の連結\n";

	//自作関数を呼び出し文字列を連結する
	my_strcat(name1,name2);
	my_strncat(name3,name4,n);

	// 平澤敬介
	cout << "my_strcat  : " << name1 << "\n";
	// 平澤敬
	cout << "my_strncat : " << name3;

	return 0;
}

	// 文字列を連結する関数
char* my_strcat(char* s1,const char* s2)
{
	 //s1 を ナル文字までポインタを走査する ことで末尾にする
	while(*s1++ != '\0'){}

	 // ポインタを１つ戻す 今はナル文字を指している
	s1--;
	// s2 を ナル文字までポインタを走査する
	//そのとき	s1 に s2 の文字列を代入する そのあとポインタをインクリメント
	while(*s2 != '\0'){
		*s1++ = *s2++;
	}
	// s2 の走査 終わり

	// 連結した文字列の最後尾にナル文字をつけることで文字列を区切る
	*s1 = '\0';
	return s1;
}

  // 文字列を長さを指定して連結する関数
char* my_strncat(char* s3,const char* s4,int n)
{
	// ナル文字までポインタを走査する
	while(*s3++ != '\0'){}

	 // ポインタを１つ戻す 今はナル文字を指している
	s3--;

	// s4 を ナル文字までポインタを走査する
	while(*s4 != '\0'){
		// 1文字ずつ文字列を連結したときに n をデクリメント
		//していき、ｎ が 0 になったとき文字の連結を終了し
	if(n <= 0){
		//	ループ処理を終わらせる。
		break;
	}else{
		n--;
	}						//
		*s3++ = *s4++;		//	s3 に s4 の文字列を代入する そのあとポインタをインクリメント
	}						// s4 の走査 終わり
	*s3 = '\0';				// 連結した文字列の最後尾にナル文字をつける
	return s3;				// 連結した文字列s3を返却する
}// 関数文終わり
