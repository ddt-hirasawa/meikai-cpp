/*
演習7-15 double型のオブジェクトを生成して0.0で初期化するプログラムの作成

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main(){

	double* x = new double(1.0);		// double型のメモリ分記憶域を確保しその値を0.0で初期化する
										// 通常のdouble型の初期化と同じではあるが文字列を読み込むときなど
										//要素数が定まらないときは使う必要が出てくる

	// new 演算子で作成したオブジェクトを表示します
	cout << "double型 : " << *x;

	// 生成したオブジェクトを破棄します
	delete x;

	//破棄されている確認をします
	cout <<"\n"<< *x;

	return 0;
}
