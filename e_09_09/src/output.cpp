/*
演習9-9 演習9－6で内部結合をもつ識別子を、名前なしの名前空間に属するように書き換える

作成日 2017年5月9日

作成者 平澤敬介
*/

#include<ctime>
#include<cstdlib>

#include "header.h"

using namespace std;

//変更点 名前なしの名前空間に変数を置きます
namespace {

	int kotae = 0;
}

//関数 乱数を発生させるコマンド
//仮引数 無し
//返却値 無し

void initialize()
{
	//現在時刻で乱数の種を生成します
	srand(time(NULL));
}

//関数 解答を発生させ、この数を当てるように頑張ります
//仮引数 無し
//返却値 乱数で発生した解答

int get_no()
{
	kotae = rand() % (max_no+1);	//範囲内の乱数を発生させます

	//main に返却して当てるように頑張ります
	return kotae;
}

//関数 入力された答えでそれぞれ値を返却して、その値で判別します
//仮引数 入力された答え cand
//片脚値 0 ～ 3 の値 それぞれ意味がある

int judge(int cand)
{
	//変更点 0より小さい または 999より大きい値であるなら
	//main文で例外となる 3を返却する
	if(cand < 0 || cand > 999) {

		//入力ミスを返却
		return 3;

	//発生させた乱数と答えが同じなら
	} else if(cand == kotae) {

		//正解です
		return 0;

	//比較して大きかったです
	} else if(cand > kotae) {

		//小さい値を返しましょう
		return 1;

	//比較して小さかったです
	} else if(cand < kotae) {

		//大きい値を返しましょう
		return 2;

	//警告を消すため
	} else {

		//4 番目はまずないです
		return 4;
	}
}
