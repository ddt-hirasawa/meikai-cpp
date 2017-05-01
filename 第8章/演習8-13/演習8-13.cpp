//演習8-13 文字列に含まれる最も先頭の文字cのポインタを返却する関数を作成する

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


	char ptr = *(strchr_ptr(sample,tmp));// char型の文字をtmpと同じ文字のオブジェクトで初期化


	// tmp と同じ文字が文字列の中に存在する場合文字列の中にあるtmp と同じオブジェクトを表示し
	if(strchr_ptr(sample,tmp) != '\0'){
		// そのオブジェクトへのポインタを表示する
		cout << "tmpのオブジェクトは " << ptr << "\n";
 		cout << "tmpへのポインタは" << &ptr << "です。\n";
 		// tmp と同じ文字が文字列の中に存在しない場合のみ、この文が表示される。
	}else
		cout << "文字tmpは存在しません。\n";

	return 0;
}

 // 文字列の中で最も先頭に位置する文字tmp のポインタを返す関数
const char* strchr_ptr(const char* s1,char tmp)
{
	//文字ptrが存在しない場合 ,ナル文字を返却するためナル文字で初期化を行う
	char* ptr = '\0';

		// s1の文字列すべてに対し処理を行うためループ処理を行う
	for(int i=1;*s1;i++){
		// 文字列s1にtmp と同じ文字がある場合そのポインタを返却する
		if(*s1 == tmp){
			return s1;
			//文字列のナル文字まで走査した場合
			// 関数内部で初期化した ナル文字を指す ptrを返却する
		}else if(*s1 == '\0'){
			return ptr;
		}
		////	文字列を次に進めるためにインクリメント
		s1++;
	}
	// 警告抑制のため　実際にはここまで来ない
	return 0;
}
