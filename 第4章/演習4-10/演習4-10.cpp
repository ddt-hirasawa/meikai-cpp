// 演習 4-10 float型 の 0 ～ 1まで 0.001 ずつ増やしていく様子と
//			int型の 0 ～ 1000まで インクリメントしながら 1000で割った値を表示していく様子を表示する
// 計算上は同じ値になるが実際は異なってくる

#include<iostream>

// setw 操作子を使うためのライブラリ 必ず必要ではない
#include<iomanip>

using namespace std;

int main()
{

	float sumplei[1001]; // int型の演算を変換して格納する配列 を定義
	float sumplef[1001]; // float型の演算を格納する 配列 を定義

	// 0 ～ 1000まで 1000で割った値を格納していくループ
	for(int i=0;i<=1000;i++){
		// float型 に変換した後 1000で割ることによって
		// 型変換は正常に行われる
		float tmp = static_cast<float>(i);
		// 配列 に0から順に格納されていく
		sumplei[i] =  tmp/1000;
	}

	// float型で 0 ～ 1 まで 0.001ずつ増加していくためのループ
	for(float x = 0.0F;x <= 1.0F;x += 0.001F){
		// 配列の番号 を作るために x に1000をかけた後 int型に変換している
		int i = static_cast<int>(x*1000);
		// 配列には順に x の値が格納されていく
		sumplef[i] = x;
	}

	// 単なる表示 float と int の加算されていく様子を確認できる
	cout << "	float    	int\n"
		<< "-------------------------\n";

	// 配列に格納されている値を順に表示していく
	// 実行結果 は float型で0.001ずつ加算していくほうで誤差が大きくなっていく
	for(int i=0;i<=1000;i++)
		cout << setw(8) << sumplef[i] << "   " << setw(8) << sumplei[i] << "\n";

	return 0;
}
