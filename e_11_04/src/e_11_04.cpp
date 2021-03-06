/*
演習11-4 コンストラクタ初期化子によって明示的に初期化しない場合、メンバ部分オブジェクトが
デフォルトコンストラクタで初期化されることを確認せよ

作成日 2017年5月10日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

using namespace std;

int main()
{
	//クラスオブジェクトの生成　個人情報をすべて入力
	Account hira("平澤敬介","123456789",1000,2017,3,3);

			//コンストラクタで呼び出し
	cout << "名義 : " << hira.name() << "\n"
			//コンストラクタで呼び出し
			<< "口座 : " << hira.no() << "\n"
			//コンストラクタで呼び出し
			<< "預金 : " << hira.bal() << "\n"
			//コンストラクタで呼び出し
			<< "開設日: " << hira.openDate().year() << "年"
			//コンストラクタで呼び出し
			<< hira.openDate().month() << "月"
			//コンストラクタで呼び出し
			<< hira.openDate().day() << "日\n";

	//クラスオブジェクトの生成　個人情報を一部隠して入力
	Account kei("平澤敬介","123456789",1000,1900);

			//コンストラクタで呼び出し
	cout << "名義 : " << kei.name() << "\n"
			//コンストラクタで呼び出し
			<< "口座 : " << kei.no() << "\n"
			//コンストラクタで呼び出し
			<< "預金 : " << kei.bal() << "\n"
			//コンストラクタで呼び出し
			<< "開設日: " << kei.openDate().year() << "年"
			//デフォルトコンストラクタで呼び出し
			<< kei.openDate().month() << "月"
			//デフォルトコンストラクタで呼び出し
			<< kei.openDate().day() << "日\n";
			/*	開設した月と日を与えずに初期化しました。
			 * 結果、その部分はデフォルトコンストラクタが呼び出され
			 * 初期化値が表示されました
			 */
	return 0;
}
