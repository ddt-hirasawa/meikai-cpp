/*
 演習14-3 簡易的文字列クラスを作成せよ 自分で設計すること

 作成日 2017年5月12日

 作成者 平澤敬介
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<cstring>
#include<iostream>

#define MAX 30	//名前の長さ MAX 30文字

class String {

	int len;		//	文字列の長さ
	char* ptr;		// 名前の文字列の先頭ポインタ

public:

	//明示的コンストラクタ
	explicit String(int len_) {

		ptr = new char[MAX];			//名前を書く枠を30文字分確保

		//ローマ字で名前を30文字以内で入力
		std::cout << "名前の入力 : ";

		//確保した領域に名前を補完
		std::cin >> ptr;

		len = std::strlen(ptr);	//名前の長さは cstring の関数でコンストラクタが呼ばれたとき代入す
	}

	//デストラクタ
	~String();

	//データメンバ フルネームを表示します
	char* open_name() const;

	//データメンバ 名前の長さを表示します
	int open_len() const;

	//名前と苗字の中間の長さを表示します
	int med_length();

	//変換コンストラクタ
	String(const char* tmp);

	//コピーコンストラクタ
	String(const String& tmp);


	//演算子関数の定義 func.cppにまとめます
	String& operator +(int);
	String& operator =(char*);
	String& operator +=(char*);
};

#endif /* CLASS_H_ */
