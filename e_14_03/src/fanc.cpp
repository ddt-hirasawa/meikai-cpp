/*
演習14-3 簡易的文字列クラスを作成せよ 自分で設計すること

作成日 2017年5月12日

作成者 平澤敬介
*/

#include"class.h"
#include<iostream>
#include<cctype>

using namespace std;

//演算子関数 +
//加算された数字で先頭から小文字を大文字に変換します
String& String::operator + (int num) {

	for(int i=0; i < num; i++) {

		this->ptr[i] = toupper(this -> ptr[i]);
	}

	return *this;
}

//演算子関数 =
//入力された文字でクラスのデータメンバ名前を書き換えます
String& String::operator = (char* name) {

	int len = strlen(name);

	for(int i=0; i< len; i++) {

		this -> ptr[i] = name[i];
	}

	this -> ptr[len] = '\0';
	return *this;
}
