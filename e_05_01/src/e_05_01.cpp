/*
演習5-1 int型で要素5 の配列を 5～1の整数で初期化する

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{

	int nTest[5];// 5つの要素なので nTest[5] までと考えがちだが nTest[0]～nTest[4] までの5要素であること

	// 配列に格納されている数字を表示していくため要素数分のループを行う
	for(int i=0; i < 5; i++) {

		// 配列の先頭からカウントダウンした値を代入する
		nTest[i] = 5-i;

	//代入した数字を表示していく部分 カウントダウン表示
		cout << "nTest[" << i << "] = " << nTest[i] << "\n";
	}

	return 0;
}
