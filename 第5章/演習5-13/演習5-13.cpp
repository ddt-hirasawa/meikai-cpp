//演習5-13 解説されている2次元配列の初期化を実際に行う

#include<iostream>

using namespace std;

int main()
{
	cout << "2次元配列の初期化\n";

	// 初期化部分 カウントアップで初期化されている
	int a[3][3] = {
			{1,2,3}, // 0行目
			{4,5,6}, // 1行目
			{7,8,9}, // 2行目
			//{7,8,9,10}, // 3行目 エラー要素が３なので
	};
	// 要素数が3なので4列目を初期化するように書くとエラーが発生する


	// 表示部分 それぞれ要素分表示を行うためループ処理を行う
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "a[" << i << "][" << j
					<< "]=" << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int b[3][3] = {
			{2,3}, // 0行目
			{4,6}, // 1行目
			{7,8}, // 2行目
	};
	// 要素数が3となっているが 各行で2つしか初期化を行っていない
	// 初期化されていない値は０で初期化される
	// 表示部分 それぞれ要素分表示を行うためループ処理を行う
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "b[" << i << "][" << j
					<< "]=" << b[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
