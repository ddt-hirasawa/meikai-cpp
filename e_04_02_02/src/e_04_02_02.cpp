/*
演習4-2 unsigned型での8進数 10進数 16進数の表記を行う

作成日 2017年5月5日

作成者 平澤敬介
 */

#include<iostream>

#include<iomanip>

// 実際に int型 unsigned型の最大値 最小値を使うと表示する量が膨大になるため
// この演習では #define で定義した値を使い疑似的に行います
#define Int_Max 127	// int 型の最大値 仮
#define Int_Min -128	// int 型の最小値 仮
#define Unsi_max 255	// unsigned型の最大値 仮
#define Unsi_min 0		// unsigned型の最小値 仮

using namespace std;

int main()
{
	 // 単なる宣言 これ以降 それぞれの進数を表記していく

	// unsigned型の場合
	cout << "8進数表記 10進数表記 16進数表記\n";

	// unsigned型の0から 最大値 まで表記を行うためのループ
	for(unsigned i=0; i <= Unsi_max; i++) {

		// 8進数 10進数 16進数の順番で表示させる
					// 8進数の部分
		cout << setw(8) << oct << i << "  "
					//10進数の部分
			<< setw(8) << dec << i << "  "
					//16進数の部分
			<< setw(8) << hex << i << "\n";
	}

	return 0;
}
