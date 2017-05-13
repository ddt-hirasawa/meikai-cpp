/*
 演習14-1 デストラクタがデータメンバの逆順に呼び出されることを確認せよ

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>

class Test1 {

	int num;				//デストラクタの動作を見るためにnew演算子で領域を確保するための要素数
	char* object;			//文字列をして領域を確保します

public:

	//コンストラクタ
	Test1(int num_) :
		//文字列の要素数を決めるためクラスオブジェクトが生成されたとき、初期化子により与えます
		num(num_)

	{
		object = new char[num];		//指定した要素数で文字数を確保します

		//宣言 コンストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 1 が生成されました\n";
	}

	//デストラクタ
	~Test1()
	{
		//宣言 デストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 1 が破棄されました\n";

		//文字列の先頭を指すポインタを削除することで、文字列分の領域を確保
		delete[] object;
	}
};

class Test2 {

	int num;				//デストラクタの動作を見るためにnew演算子で領域を確保するための要素数
	char* object;			//文字列をして領域を確保します

public:

	//コンストラクタ
	Test2(int num_) :
		//文字列の要素数を決めるためクラスオブジェクトが生成されたとき、初期化子により与えます
		num(num_)

	{
		object = new char[num];		//指定した要素数で文字数を確保します

		//宣言 コンストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 2 が生成されました\n";
	}

	//デストラクタ
	~Test2()
	{
		//宣言 デストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 2 が破棄されました\n";

		//文字列の先頭を指すポインタを削除することで、文字列分の領域を確保
		delete[] object;
	}
};

class Test3 {

	int num;				//デストラクタの動作を見るためにnew演算子で領域を確保するための要素数
	char* object;			//文字列をして領域を確保します

public:

	//コンストラクタ
	Test3(int num_) :
		//文字列の要素数を決めるためクラスオブジェクトが生成されたとき、初期化子により与えます
		num(num_)

	{
		object = new char[num];		//指定した要素数で文字数を確保します

		//宣言 コンストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 3 が生成されました\n";
	}

	//デストラクタ
	~Test3()
	{
		//宣言 デストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 3 が破棄されました\n";

		//文字列の先頭を指すポインタを削除することで、文字列分の領域を確保
		delete[] object;
	}
};

class Test4 {

	int num;				//デストラクタの動作を見るためにnew演算子で領域を確保するための要素数
	char* object;			//文字列をして領域を確保します

public:

	//コンストラクタ
	Test4(int num_) :
		//文字列の要素数を決めるためクラスオブジェクトが生成されたとき、初期化子により与えます
		num(num_)

	{
		object = new char[num];		//指定した要素数で文字数を確保します

		//宣言 コンストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 4 が生成されました\n";
	}

	//デストラクタ
	~Test4()
	{
		//宣言 デストラクタが呼び出されたことの確認
		std::cout << "クラスオブジェクト 4 が破棄されました\n";

		//文字列の先頭を指すポインタを削除することで、文字列分の領域を確保
		delete[] object;
	}
};


#endif /* CLASS_H_ */
