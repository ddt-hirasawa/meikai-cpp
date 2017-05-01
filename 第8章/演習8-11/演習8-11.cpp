#include<iostream>		// 入出力のヘッダ

using namespace std;	// 名前空間の指定

int my_strcmp(const char*,const char*);		// 文字列を比較する関数の宣言
int my_strncmp(const char*,const char*,int); 	// 指定された長さまでの文字列を比較する関数の宣言

int main() // main文 の始まり
{
	char a[] = "EBCE";		//
	char b[] = "ABCD";		//関数を使って比較する文字列
	char c[] = "AAA";	// それぞれ aとb cとd を比較する
	char d[] = "AAA";		//
	int n = 7;				// ７文字目まで長さを指定する

	cout << "文字列 a " << a << "\n"		//比較前の文字列を
			<< "文字列 b " << b << "\n";	// a,b,c,d をそれぞれ改行し表示する
	cout << "文字列 c " << c << "\n"		//
			<< "文字列 d " << d << "\n";	//

	int ans1 = my_strcmp(a,b);				// 関数の呼び出し

	switch(ans1){										//
	case 0 : cout << "等しい文字列です\n"; break;		//返却された値でそれぞれの
	case 1 : cout << "文字列 a が大きいです\n"; break;	//case に向かい文字列を比較する
	case -1 : cout << "文字列 b が大きいです\n"; break;//関数側で0で初期化されているため
	}													//default は必要ない

	int ans2 = my_strncmp(c,d,n);				// 関数の呼び出し

	switch(ans2){										//
	case 0 : cout << "等しい文字列です\n"; break;		//返却された値でそれぞれの
	case 1 : cout << "文字列 c が大きいです\n"; break;//case に向かい文字列を比較する
	case -1 : cout << "文字列 d が大きいです\n"; break;//関数側で0で初期化されているため
	}													//default は必要ない

	return 0;// プログラム終了
}	// main文 終わり

int my_strcmp(const char* s1,const char* s2)	// 文字列を比較する関数
{
	int cnt = 0;									//返却する値 if文にかからなければ0のまま
	for(int i=0;*s1;i++){							// s1の文字列でナル文字が検出されるまで行う
		if(*s1++ > *s2++){							//ｓ１の文字列が大きい場合、
			cnt++; break;							//cnt をインクリメントしループから外れる
		}else if(*s1 < *s2){						//ｓ２の文字列が大きい場合、
		cnt--; break;								//cnt をデクリメントしループから外れる
		}											//
	}												//
	return cnt;									//比較する処理を終えた後の cnt を返却する
}													//関数文終わり

int my_strncmp(const char* s1,const char* s2,int n)	// 指定された長さまでの文字列を比較する関数
{
	int cnt = 0;									//返却する値 if文にかからなければ0のまま
	for(int i=1;i <= n;i++){						//指定された長さまで比較する処理を行う
		if(*s1 > *s2){								//ｓ１の文字列が大きい場合、
			cnt++; break;							//cnt をインクリメントしループから外れる
		}else if(*s1 < *s2){						//ｓ２の文字列が大きい場合、
		cnt--; break;								//cnt をデクリメントしループから外れる
		}											//
		if(*s1 == '\0' || *s2 == '\0') break;		//ｓ１とｓ２の文字列でナル文字を検出したときループから外れる
		s1++;										//s1のポインタをインクリメント
		s2++;										//s2のポインタをインクリメント
	}												//
	return cnt;									//比較する処理を終えた後の cnt を返却する
}													//関数文終わり
