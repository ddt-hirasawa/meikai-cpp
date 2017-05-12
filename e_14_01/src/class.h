/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>

class Intarray {

	int nelem;		//配列の要素数
	int* vec;		//配列の先頭要素のポインタ

public:
	//明示的コンストラクタ		暗黙の型変換を抑止する
	//デフォルトコンストラクタを定義できない？
	explicit Intarray(int size) :
			//配列の要素数をコンストラクタが呼び出されたときの
			//初期値で決定する
			nelem(size) {

		//先頭要素のポインタは、まだ、値が定まらないので
		//new演算子でメモリを確保した上での先頭要素へのポインタにナル

		std::cout << "オブジェクトが生成されました\n";
		vec = new int[nelem];
	}

	//デストラクタ
	~Intarray() {

		std::cout << "オブジェクトが破棄されました\n";
		//先頭要素のポインタを破棄することでヒープ領域を確保
		delete[] vec;
	}

};

#endif /* CLASS_H_ */
