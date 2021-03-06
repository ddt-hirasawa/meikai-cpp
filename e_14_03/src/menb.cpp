/*
 演習14-3 簡易的文字列クラスを作成せよ 自分で設計すること

 作成日 2017年5月12日

編集日 2017年5月20日

作成者 平澤敬介
*/


#include<cstring>
#include<iostream>
#include"class.h"

	//デストラクタ
	String::~String() {

			delete[] ptr;
	}

	//データメンバ フルネームを表示します
	char* String::open_name() const {

		//main に名前を返却します
		return ptr;
	}

	//データメンバ 名前の長さを表示します
	int String::open_len() const {

		// main に名前の長さを返却します
		return len;
	}
	//名前と苗字の中間の長さを表示します
	int String::med_length() {

		int judg = 0;		//中間文字がなかったとき用

		int len = 0;	//先頭文字を指している状態で初期化

		char* serch = ptr;	//データメンバ のポインタを借用

		//名前の最後まで中間文字を走査します
		for (; *serch++ != '\0'; len++) {

			//中間を発見しました
			if (*serch == '_') {

				judg++;
				//2個も3個もないのでループから出ます
				break;
			}
		}

		len++;		//1つ手前なので中間へ移動

		//ただし、中間文字を検出できなかったときは
		if (judg == 0) {

			//中間無しということで、先頭に戻します
			len = 0;
		}

		//中間点を返却
		return len;
	}

	//変換コンストラクタ
	String::String(const char* tmp) :
			ptr(const_cast<char*>(tmp)) {


		//文字の長さを文字数で初期化
		len = std::strlen(tmp);

		ptr = new char[len];			//名前を書く枠を文字分確保

		for (int i = 0; i < len; i++) {

			//自分と参照している相手は同じ人間です
			ptr[i] = tmp[i];
		}
		ptr[len] = '\0';		//文字化けするのでナル文字を入れます
	}

	//コピーコンストラクタ
	String::String(const String& tmp) {

		len = tmp.len;			//コピー元の文字列の長さを覚えます

		ptr = new char[len];	//その長さ文で領域を確保します

		//コピー開始 文字列分の代入を行います
		for (int i = 0; i < len; i++) {

			//自分と参照している相手は同じ人間です
			ptr[i] = tmp.ptr[i];
		}
		ptr[len] = '\0';		//文字化けするのでナル文字を入れます
	}
