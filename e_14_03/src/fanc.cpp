/*
 演習14-3 簡易的文字列クラスを作成せよ 自分で設計すること

 作成日 2017年5月12日

 作成者 平澤敬介
 */

#include"class.h"
#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

//演算子関数 +
//加算された数字で先頭から小文字を大文字に変換します
String& String::operator +(int num) {

	//指定した文字まで大文字に変換します
	for (int i = 0; i < num; i++) {

		//参照で今の文字を大文字に変換します
		this->ptr[i] = toupper(this->ptr[i]);
	}
	//自分自身に反映させます
	return *this;
}

//演算子関数 =
//入力された文字でクラスのデータメンバ名前を書き換えます
String& String::operator =(char* name) {

	int len1 = strlen(name);	//書き換える名前の文字数を出します

	//その文字数文の書き換えを行います
	for (int i = 0; i < len1; i++) {

		//自分自身を代入された文字に書き換えます
		this->ptr[i] = name[i];
	}

	this->ptr[len1] = '\0';		//文字化けするのでナル文字を置きます

	this->len = len1;				//全文字数はコンストラクタで初期化されているので更新します

	//自分自身に反映させます
	return *this;
}

//演算子関数 +=
//加算された数字で先頭から小文字を大文字に変換します
String& String::operator += (char* name) {

	this->ptr = strcat(this->ptr,name);

	//自分自身に反映させます
	return *this;
}
