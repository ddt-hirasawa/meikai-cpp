/*
 演習8-12 文字列に含まれる最も先頭の文字cの添字を返却する関数を作成する

 作成日 2017年5月9日

 作成者 平澤敬介
 */

#include<iostream>

using namespace std;

// 文字列の中で最も先頭に位置する文字tmp の添字を返す関数の宣言
int strchr_idx(const char*, char);

int main() {
	char sample[] = "ASDFGDRRETYU"; //この文字列の中から探す 最も先頭の文字列のみ返却
	char tmp = 'R';					// R 添字 は　6です。

	// 関数処理前の文字列の表示を行う　コンソール上で確認するため
	cout << "文字列 sample " << sample << "\n";

	// 返却された値が0以上のときのみ添字の返却を行う
	if (strchr_idx(sample, tmp) >= 0) {

		//発見しました
		cout << "文字 " << tmp << " の添字は" << strchr_idx(sample, tmp) << "です。\n";//

	// 関数内部で-1で初期化されているため
	//文字がない場合のみ表示される
	} else {

		//発見できませんでした
		cout << "文字 " << tmp << " の添字はありません。";
	}

	return 0;
}

//関数 文字列の中で最も先頭に位置する文字tmp の添字を返す
//仮引数 探す配列の先頭要素を指すポインタ 探す文字 tmp
//返却値 文字tmp があった場合は その添字 ない場合は -1
int strchr_idx(const char* s1, char tmp) {

	int cnt = -1;		// カウントする変数 文字がない場合ー１を返却する

	// s1の文字列すべてに対し処理を行うためループを使う
	for (int i = 1; *s1; i++) {

		//tmp と同じ文字が文字列s１にあった場合
		if (*s1 == tmp) {
			//cnt に i を加え添字を表示する
			cnt = cnt + i;

			//一度でも発見したら、ループを終わらせます。
			break;
		}
		//今指している文字が違うのなら次の文字に移る
		s1++;
	}
	//添字までカウントされた cnt を返却する。
	return cnt;
}
