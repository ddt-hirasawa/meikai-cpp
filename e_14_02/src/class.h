/*
演習14-2 クラスIntarray のオブジェクトを自己初期化する宣言 Intarray x = x; では、オブジェクトxのデータメンバ nelem と vec
が不定値で初期化される。自己初期化が行われた際、データメンバを不定値で初期化しないようにコピーコンストラクタを改良せよ

作成日 2017年5月12日

作成者 平澤敬介
*/


#ifndef CLASS_H_
#define CLASS_H_

class Intarray {

	int nelem;		//配列の要素数
	int* vec;		//配列の先頭要素のポインタ

public:

	//例外クラス
	class IdxRngERR {

	private :

		Intarray* p_array;		//配列クラスの要素を指すポインタ
		int idx;				//その配列の番号

	public:

		//コンストラクタ
		IdxRngERR(Intarray* p,int num) :

			//初期化子により決定 throw から来る値
			p_array(p), idx(num) {

		}

		//ゲッタ 例外を検出した配列の番号を返却
		int index() {

			return idx;
		}
	};

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
	~Intarray() {

		//先頭要素のポインタを破棄することでヒープ領域を確保
		delete[] vec;
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
	int& operator [](int i) {

		//負の値と要素数以上は受け付けません
		if(i < 0 || nelem <= i) {

			//if文の条件にかかった場合 その値自信を例外クラスになげる
			throw IdxRngERR(this, i);
		}

		return vec[i];
	}

	//演算子関数 =
	Intarray& operator =(const Intarray& x);
};

#endif /* CLASS_H_ */
