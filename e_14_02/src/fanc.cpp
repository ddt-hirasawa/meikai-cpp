/*
 演習14-2 クラスIntarray のオブジェクトを自己初期化する宣言 Intarray x = x; では、オブジェクトxのデータメンバ nelem と vec
 が不定値で初期化される。自己初期化が行われた際、データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ

 作成日 2017年5月12日

 作成者 平澤敬介
 */

#include <iostream>

#include"class.h"

using namespace std;

//コピーコンストラクタ
Intarray::Intarray(const Intarray& x)

{
	if (&x != this) {

		nelem = x.nelem;	//要素数をコピーする要素数と同じにする

		vec = new int[nelem];	//その要素数分 先頭からの領域を確保

		//コピー元の配列の中身をこちらに代入する
		for (int i = 0; i < nelem; i++) {
			//先頭から末尾まで
			vec[i] = x.vec[i];
		}
	} else {

		vec = new int[nelem];	//その要素数分 先頭からの領域を確保

		//末尾から先頭まで
		for (int i; i > 0; i--) {
			//初期値として すべて 0 を代入
			vec[i] = 0;
		}
	}
}

//代入演算子
Intarray& Intarray::operator =(const Intarray& x) {
	//代入するのが自分でなければ
	if (&x != this) {

		//代入前と後の要素数が異なれば
		if (nelem != x.nelem) {

			//代入される側のポインタを消して領域を解放
			delete[] vec;
			//代入元の要素数で
			nelem = x.nelem;
			//新たに領域を確保する
			vec = new int[nelem];
		}
		//その要素数で代入される側の配列をすべて埋める
		for (int i = 0; i < nelem; i++) {
			//1つずつ代入
			vec[i] = x.vec[i];
		}
	}
	//最後に自分自身に反映させる
	return *this;
}
