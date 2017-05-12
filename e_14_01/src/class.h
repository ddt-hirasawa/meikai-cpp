/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#ifndef CLASS_H_
#define CLASS_H_

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
		vec = new int[nelem];
	}

	//デストラクタ
	~Intarray(int tmp) {

		//配列の先頭要素のポインタを破棄することで、メモリを解放する
		delete[] *(vec+tmp);
	}
	//コピーコンストラクタ
	Intarray(const Intarray& x);

	//メンバ関数 要素数を返却する
	//仮引数 無し
	//返却値 配列の要素数
	int size_set() const {

		return nelem;
	}

	//演算子関数 []
	int& operator [] (int i) {

		return vec[i];
	}

	//演算子関数 =
	Intarray& operator = (const Intarray& x);
};

#endif /* CLASS_H_ */
