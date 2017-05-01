// 演習7-15 double型のオブジェクトを生成して0.0で初期化するプログラムの作成

#include<iostream>

using namespace std;

int main(){

	// double型のメモリ分記憶域を確保しその値を0.0で初期化する
	// 通常のdouble型の初期化と同じではあるが文字列を読み込むときなど
	//要素数が定まらないときは使う必要が出てくる
	double* x = new double(0.0);

	cout << "double型 : " << *x;

	return 0;
}
