/*
演習14-3 簡易的文字列クラスを作成せよ 自分で設計すること

作成日 2017年5月12日

作成者 平澤敬介
*/

#include"class.h"
#include<iostream>

using namespace std;

int main()
{
	char name[] = "HIRASAWA_KEISUKE";	// 自分の名前 自分の名前の先頭ポインタ

	char* ptr = name;

	//変換コンストラクタの動作確認
	//クラスオブジェクト 人間で生成
	String human = "human_man";

	//クラスに代入した時の名前が表示されるかの確認
	cout << human.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << human.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << human.med_length() << "\n";

	//コピーコンストラクタの動作確認
	//クラスオブジェクト 人間1で生成
	String human1 = human;

	//クラスに代入した時の名前が表示されるかの確認
	cout << human1.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << human1.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << human1.med_length() << "\n";

	//明示的コンストラクタの動作確認
	//クラスオブジェクト 人間で生成
	String human2(ptr);

	//クラスに代入した時の名前が表示されるかの確認
	cout << human2.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << human2.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << human2.med_length() << "\n";

	return 0;
}
