/*
 演習14-2 クラスIntarray のオブジェクトを自己初期化する宣言 Intarray x = x; では、オブジェクトxのデータメンバ nelem と vec
 が不定値で初期化される。自己初期化が行われた際、データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ

 作成日 2017年5月12日

 作成者 平澤敬介
 */

#include <iostream>
#include<new>
#include<iomanip>

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

		//コピー元の配列の中身をこちらに代入する
		for (int i = 0; i < nelem; i++) {
			//先頭から末尾まで
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

//関数 例外処理 配列以外の要素を指したときの対処
//仮引数 配列のサイズ 配列の番号
//返却値 無し

void error_array_test(int size, int num) {

	try{

		Intarray object(size);	//仮のクラスオブジェクトの生成

		//生成したオブジェクトに値を代入していく
		for(int i=0; i < num; i++) {

			object[i] = i;		//添字を大美優

			//一応表示を行う
			cout << "object[" << i << "] = " << object[i] << "\n";
		}

	//例外クラス から添字演算子のifにかかったとき
	} catch (Intarray :: IdxRngERR& object){

		//宣言オーバーフロー
		cout << "添字オーバーフロー 添字 : " << object.index() << "\n";

		cout << "例外処理\n";

		return;
	}

	//メモリを大量に確保したとき 3000000要素くらい
	catch (bad_alloc &objrct) {

		cout << "メモリの確保に失敗\n";

		return;
	}
}
