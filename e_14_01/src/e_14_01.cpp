/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#include <iostream>

#include"class.h"

using namespace std;

//関数宣言 デストラクタのテスト
void death();

int main()
{
	int num = 10;				//クラスオブジェクトの配列の要素数となる変数

	Intarray x(num);	//クラスオブジェクト 配列要素数 10 で固定すぐ消すので簡潔に return 0 で消滅

	cout << "関数内部\n";

	//デストラクタが機能しているか確認します
	death();

	cout << "関数内部\n";

	return 0;
}

//関数 デストラクタのテストを行うために、動的記憶域期間内の関数内でクラスを生成し破棄されることを確認する
//仮引数 なし
//返却値 なし
void death()
{
	//関数の呼び出しが終われば消滅
	Intarray death(100);


}
