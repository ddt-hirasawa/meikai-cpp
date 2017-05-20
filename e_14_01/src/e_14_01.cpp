/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 編集日 2017年5月30

 作成者 平澤敬介
 */

#include <iostream>

#include"class.h"

using namespace std;

int main()
{

	Test1 name1(10);		//文字列の長さを決定する要素を与えます	データメンバ num を決定します
	Test1 name2(20);		//文字列の長さを決定する要素を与えます	データメンバ num を決定します
	Test1 name3(30);		//文字列の長さを決定する要素を与えます	データメンバ num を決定します
	Test1 name4(40);		//文字列の長さを決定する要素を与えます	データメンバ num を決定します

	//デストラクタと区切ります
	cout << "\n";

	return 0;
}


/*
 * Test1 ～ 4 まで順にオブジェクトを生成しています。コンストラクタも cout でコンソールから順に呼び出されていることがわかります
 *
 * ですが、return 0　でプログラムが終了するタイミングで デストラクタが呼び出されます
 *
 * 結果は、確かにコンストラクタの逆順に呼び出されています
 */
