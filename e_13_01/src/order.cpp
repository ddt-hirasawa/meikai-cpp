#include"class.h"

using namespace std;

//2つの日付が正しいかどうかの等価演算子 ==
bool date::operator ==(const date& tmp)

{
	bool answer = false; //return を複数定義しないために bool型の変数を定義します デフォルトは 「 間違ってます 」
	//参照する tmp の西暦 と 比べるほうが等しい場合
	//次の項目に移ります
	if (this->y == tmp.y) {

		//参照する tmp の年 と 比べるほうが等しい場合
		//次の項目に移ります
		if (this->m == tmp.m) {

			//参照する tmp の日 と 比べるほうが等しい場合
			//bool型のtrueを返却します。
			if (this->d == tmp.d) {

				//西暦から比較していき、本当に正しいことを確認したら true
				answer = true;
			}
		}
	}
	//参照する 項目が1つでも違う場合
	//bool型のfalseを返却します
	return answer;
}

//2つの日付が異なっているかどうかの等価演算子 !=
bool date::operator !=(const date& tmp)

{
	bool answer = true;	//return を複数定義しないために bool型の変数を定義します デフォルトは 「 正解です 」

	//参照する tmp の西暦 と 比べるほうが異なる場合
	// true を代入します
	if (this->y != tmp.y) {

		//デフォルトが true なので更新します
		answer = false;
		//参照する tmp の年 と 比べるほうが異なる場合
		//true を代入します
	} else if (this->m != tmp.m) {

		//デフォルトが true なので更新します
		answer = false;
		//参照する tmp の日 と 比べるほうが等しい場合
		//bool型のtrueを代入します。
	} else if (this->d != tmp.d) {

		//デフォルトが true なので更新します
		answer = false;
	}
	//参照する 項目が1つでも同じ場合
	//bool型のfalseを返却します
	return answer;
}

//2つの日付の大小を判定する関係演算子 > >= < <=
//同じ動作をするので 課題では  << のみ使います
bool date::operator <<(const date& tmp)
// 未来 ->  true  過去  ->  false
// tmp -> main のSelect   this -> main のdToday
		{
	bool answer = false;//return を複数定義しないために bool型の変数を定義します デフォルトは 「 間違ってます 」

	//西暦が未来なら、上限なし
	if (this->y < tmp.y) {

		//answer を 未来 に更新します
		answer = true;

		//else は同じく if分通過後、answerがfalseとは限らないから
	} else {

		//answer を 過去 に更新します
		answer = false;
	}

	//月が大きいなら、12月が最大
	if (this->m <= tmp.m) {

		//answer を 未来 に更新します
		answer = true;

		//else は日にちの if分通過後、answerがfalseとは限らないから
	} else {

		//answer を 過去 に更新します
		answer = false;
	}

	//日にちが先なら
	if (this->d <= tmp.d) {

		//answer を 未来 に更新します
		answer = true;
	}

	//ここまでの、処理で true or false
	return answer;
}

//2つの日付の減算を行う減算演算子 -
date date::operator - (const date& tmp)
//tnis ポインタでさしたクラスと 参照するクラスとでデータメンバの値の差を求めます
{
	date answer;	//クラスオブジェクト 指定した日にちと本日の差で初期化します

	answer.y = tmp.y - this -> y;		//選択した西暦と本日の西暦の差を出します。
	answer.m = tmp.m - this -> m;		//選択した月と本日の月の差を出します。
	answer.d = tmp.d - this -> d;		//選択した日と本日の日の差を出します。

	//差分をクラスオブジェクトとして生成します
	return answer;
}

//日付を翌日に更新する増分演算子 ＋＋
date operator ++ (const date& tmp)
//明日の日付は、月や年月によって様変わりします。
{
	//date tmp = *this;	//今日の日付をクラスオブジェクトに保管します

	//今日が12月31日の場合、
	if(tmp.m == 12 && tmp.d == dmax[11]) {

		tmp.y++;		//来年の
		tmp.m = 1;		//1月
		tmp.d = 1;		//1日 元旦にします

	//明日が来年ではないのならば
	} else {
		//今日が月末でないならば
		if(tmp.d < dmax[ tmp.m + 1 ]) {

			//明日にします。
			tmp.d++;

		//月末ならば
		} else	{

			//初日にします
			tmp.d = 1;

			//来月にします
			tmp.m++;
		}
	}

	return tmp;
}









