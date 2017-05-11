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
