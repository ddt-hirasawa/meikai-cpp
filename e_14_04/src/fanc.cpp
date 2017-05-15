/*
演習14-4 簡易的な行列クラス Matrix を作成せよ 自分で設計すること

作成日 2017年5月12日

作成者 平澤敬介
*/

#include<iostream>
#include"class.h"

using namespace std;

//演算子関数 + 加算します
Matrix Matrix::operator + (const Matrix& tmp) {

	Matrix obuject(this->_height,this->_width);	//今見ている配列要素でクラス配列を作ります

	//行分を操作するため、ループします
	for(int i=1; i <= _height; i++) {

		//列分を操作するため、ループします
		for(int j=1; j <=_width; j++) {

			obuject.ptr[i][j] =  ptr[i][j] + tmp.ptr[i][j];		//今指しているクラスと与えるクラスの配列を加算します

		}
	}
	return obuject;
}

//演算子関数 - 減算します
Matrix Matrix::operator - (const Matrix& tmp) {

	Matrix obuject(this->_height,this->_width);	//今見ている配列要素でクラス配列を作ります

	//行分を操作するため、ループします
	for(int i=1; i <= _height; i++) {

		//列分を操作するため、ループします
		for(int j=1; j <=_width; j++) {

			obuject.ptr[i][j] =  ptr[i][j] - tmp.ptr[i][j];		//今指しているクラスと与えるクラスの配列を減算します

		}
	}
	return obuject;
}

//演算子関数 * 積算します
Matrix Matrix::operator * (double n) {

	Matrix obuject(this->_height,this->_width);

	//行分を操作するため、ループします
	for(int i=1; i <= _height; i++) {

		//列分を操作するため、ループします
		for(int j=1; j <=_width; j++) {

			obuject.ptr[i][j] =  ptr[i][j] * n;		//今指しているクラスとmain内で与えられた変数をを積算します

		}
	}
	return obuject;
}

//演算子関数 = 代入します
Matrix Matrix::operator = (const Matrix& tmp) {

	Matrix obuject(this->_height,this->_width);

	//行分を操作するため、ループします
	for(int i=1; i <= _height; i++) {

		//列分を操作するため、ループします
		for(int j=1; j <=_width; j++) {

			obuject.ptr[i][j] =  tmp.ptr[i][j];		//今指しているクラスの配列に与えるクラスの配列を代入します

		}
	}
	return obuject;
}

