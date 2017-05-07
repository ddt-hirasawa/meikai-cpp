/*
演習5-6 乱数を生成しその数分 * を表示し横グラフを作っていく

作成日 2017年5月7日

作成者 平澤敬介
*/

#include<iostream>
//ランダム関数を使うためののライブラリ
#include<cstdlib>

//	現在時刻を定義しているライブラリ
#include<ctime>

using namespace std;

int main()
{
	int nStar[15];//要素数15で配列を定義する 0から14で横グラフを作る

	// 乱数の種を現在時刻で生成する
		srand(time(NULL));

	//要素数分乱数を生成するためループ処理を行う
	// 配列に0から10の数字を格納する 0から10まで＊を表示することになる
	for(int i=0; i < 15; i++) {

		//配列の要素の乱数を代入します
		nStar[i] = rand()%11;
	}

	//要素数分乱数を生成するためループ処理を行う
	for(int i=0; i < 15; i++) {

		//表示を合わせるため1ケタのとき空白を文字出力する
		if(i < 10) {
			// 1文字分空白を表示します
			cout << " ";
		}

		//単なる表示 何番目を表示しているのか確認できる
		cout << "nStar[" << i << "] : ";

		//配列の数分表示を行うためループ処理を行う 文字は＊
		for(int j=0; j < nStar[i]; j++) {
			// * を配列の値分表示します
			cout << "*";
		}

		// すべての処理が終われば改行し次の処理を行う
		cout << "\n";
	}
	return 0;
}
