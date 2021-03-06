/*
演習8-13 文字列に含まれる最も先頭の文字cのポインタを返却する関数を作成する

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

// 文字列の中で最も先頭に位置する文字tmp のポインタを返す関数の宣言
const char* strchr_ptr(const char*,char);

int main()
{
	char sample[] = "ASDFGDRETYU"; //この文字列の中から探す 最も先頭の文字列のみ返却
	char tmp = 'R';					// R  は　6番目に存在する。

		// 関数処理前の文字列の表示を行う　コンソールで確認するため
	cout << "文字列 sample " << sample << "\n";


	char Ptr = *(strchr_ptr(sample,tmp));// char型の文字をtmpと同じ文字のオブジェクトで初期化


	// tmp と同じ文字が文字列の中に存在する場合文字列の中にあるtmp と同じオブジェクトを表示し
	if(*strchr_ptr(sample,tmp) != 0) {

		// そのオブジェクトへのポインタを表示する
		cout << "tmpのオブジェクトは " << Ptr << "\n";

		//このアドレスから後ろの文字列を表示します
		cout << "tmpへのポインタは" << &Ptr << "です。\n";

 	// tmp と同じ文字が文字列の中に存在しない場合のみ、この文が表示される。
	} else {

		//発見できませんでした
		cout << "文字tmpは存在しません。\n";
	}

	return 0;
}

//関数 文字列の中で最も先頭に位置する文字tmp のポインタを返す
//仮引数 探す配列の先頭要素を指すポインタ 探す文字 tmp
//返却値 最も先頭に位置する文字tmp のポインタ

const char* strchr_ptr(const char* s1,char tmp)
{
	const char* answer;
	int cnt = 0;

	// s1の文字列すべてに対し処理を行うためループ処理を行う
	for(int i=1; *s1; i++) {

		// 文字列s1にtmp と同じ文字がある場合
		if(*s1 == tmp) {

			//そのポインタを記憶する
			answer = s1;
			cnt++;

		}

		////	文字列を次に進めるためにインクリメント
		s1++;
	}

	//文字を発見できなかったときにもポインタを返却します
	if(cnt == 0) {

		//同じ文字がなかったことになるので、s1の最後尾のナル文字を代入します
		answer = s1;
	}
	// いずれかのポインタを返却します
	return answer;
}
