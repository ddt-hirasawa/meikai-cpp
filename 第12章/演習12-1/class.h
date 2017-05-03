/*
 * class.h
 *
 *  Created on: 2017/05/02
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

// 前置演算子と後置演算子の使い方 メリット デメリットを検討するために
// 単純なカウンタを作り確認します
class count{
	int cnt;// データメンバを定義する 前置演算子と後置演算子で値の移り変わりを見るだけなので
	// 1つで十分
public:
	count()// コンストラクタ データメンバ を0で初期化する
		:  cnt(0)// 前置演算子と後置演算子で加算を行う
	{
	}

	// カウントした値を返却するメンバ関数
	// 関数名がないのでなく opereator int で型を持った関数になる
	operator int(){ return cnt; }

	//前置演算子 でインクリメントを行う	返却する型は、＆が付くことにより
	//クラスへの参照になる また、thisポインタで自分自身への参照を返却する
	count& operator++() {
			cnt++;
			return *this;
	}

	//後置演算子 でインクリメントを行う *thisで自分自身の値を変数に保存しておく
	// データメンバをインクリメントする 変数xを返す
	//後置演算子を呼び出したとき、データメンバはインクリメントされるが
	// 表示される値は 1つ前の値になる
	count operator++(int) {
			count x = *this;
			cnt++;
			return x;
	}

};



#endif /* CLASS_H_ */
