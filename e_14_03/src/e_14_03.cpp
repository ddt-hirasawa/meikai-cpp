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
	char name[] = "hirasawa_KEISUKE";	// 自分の名前 自分の名前の先頭ポインタ

	char* ptr = name;

	//変換コンストラクタの動作確認
	//クラスオブジェクト 人間で生成
	String human = "human_man";

	cout << "変換コンストラクタ \n";
	//クラスに代入した時の名前が表示されるかの確認
	cout << "名前 : " << human.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << "名前の全文字数 : " << human.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << "名前の中間文字 : " << human.med_length() << "\n";

	//コピーコンストラクタの動作確認
	//クラスオブジェクト 人間1で生成
	String human1 = human;

	cout << "コピーコンストラクタ \n";
	//クラスに代入した時の名前が表示されるかの確認
	cout << "名前 : " << human1.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << "名前の全文字数 : " << human1.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << "名前の中間文字 : "<< human1.med_length() << "\n";

	//明示的コンストラクタの動作確認
	//クラスオブジェクト 人間で生成
	String human2(ptr);

	cout << "明示的コンストラクタ \n";
	//クラスに代入した時の名前が表示されるかの確認
	cout << "名前 : " << human2.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << "名前の全文字数 : " << human2.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << "名前の中間文字 : " << human2.med_length() << "\n";

	cout << "演算子関数 + により大文字にします\n";
	human2 + 8;		//演算子関数 + の動作確認 大文字に変換します

	//参照しているので、データメンバ自体を書き換えます
	cout << human2.open_name() << "\n";

	char* another = new char[30];		//他人の名前を書くための用紙を用意します

	//誰かの名前を入力してください
	cout << "あなたは誰ですか？ : ";

	//キーボードからのアルファベットで入力
	cin >> another;

	cout << "演算子関数 = により代入し名前を書き換えます\n";
	human2 = another;					//演算子関数 + の動作確認 大文字に変換します

	//参照しているので、データメンバ自体を書き換えます
	cout << "名前 : " << human2.open_name() << "\n";
	//文字数が出せるのかの確認
	cout << "名前の全文字数 : " << human2.open_len() << "\n";
	//中間文字を出せるのかの確認
	cout << "名前の中間文字 : " << human2.med_length() << "\n";

	//代入し終わったので 他人ではなく本人になりました
	delete[] another;

	return 0;
}
