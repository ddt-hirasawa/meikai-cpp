/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#include <iostream>

#include"class.h"

using namespace std;

Intarray::Intarray(const Intarray& x)
{
	nelem = x.nelem;

	vec	=	new int[nelem];

	for(int i=0; i < nelem; i++) {


		vec[i]	=	x.vec[i];
	}

	//delete[] vec;
}

Intarray& Intarray :: operator = (const Intarray& x)
{
	if(&x != this) {


		if(nelem != x.nelem) {


			delete [] vec;
			nelem = x.nelem;
			vec = new int[nelem];
		}

		for(int i=0; i < nelem; i++) {

			vec[i] = x.vec[i];
		}
	}

	return *this;
}
