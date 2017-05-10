/*
 演習12-2 クラス Boolean に private の v がFalseであればbool型の true を Trueであれば
 bool型のfalseを返却する演算子関数!を追加せよ

 作成日 2017年5月10日

 作成者 平澤敬介
 */

#include<iostream>

//真理値クラス
class Boolean {
public:
	//文字 False に 0 True に 1 を割り振ります
	enum boolean {
		// 0      1
		False, True
	};

private:
	boolean v;						//真理値
public:
	//デフォルトコンストラクタ
	//デフォルトは偽物
	Boolean() :
			v(False) {
	}

	//コンストラクタ
	Boolean(int val)
	//コンストラクタ初期化子によって enum の False True のどちらかを与えます
	:
			v(val == 0 ? False : True) {
	}
	//int型へboolen型を変換します  0   1  どっちか
	operator int() const {
		//真理値 0 1 どちらかを返します
		return v;
	}

	// 真理値 v をconst char* 型へ変換する変換関数
	operator const char*() const {

		// v が false -> 0 かどうかで どちらかの文字を返します
		return v == False ? "False" : "True";
	}

	// 変更点 追加した演算子関数!
	// 返却する型は bool型で v と逆の表示を行うためにif文で分岐させる
	bool operator!() const {

		//クラスの真理値 v が enum の False なら
		if (v == False) {
			//こちらはbool型のtrue を返却します
			return true;

		//クラスの真理値 v が enum のTrue なら
		} else {
			//こちらはbool型のfalse を返却します
			return false;
		}
	}

};

//ソースファイルに埋め込まれた挿入子の定義
inline std::ostream& operator <<(std::ostream& s, Boolean& x);

