/*
 演習8-11 strcmp strncmp 関数と同様の関数を作りなさい

 作成日 2017年5月8日

 作成者 平澤敬介
 */

#include<iostream>

using namespace std;

// 文字列を比較する関数の宣言
int my_strcmp(const char*, const char*);

// 指定された長さまでの文字列を比較する関数の宣言
int my_strncmp(const char*, const char*, int);

int main() {
	char aTest[] = "HBCE";		//
	char bTest[] = "DBCE";		//関数を使って比較する文字列
	char cTest[] = "AAAAD";	// それぞれ aとb cとd を比較する
	char dTest[] = "AAAA";		//
	int n = 4;				// ７文字目まで長さを指定する

	//比較前の文字列を a,b,c,d をそれぞれ改行し表示する
	cout << "文字列 aTest " << aTest << "\n" << "文字列 bTest " << bTest << "\n";
	cout << "文字列 cTest " << cTest << "\n" << "文字列 dTest " << dTest << "\n";

	// 関数の呼び出し 文字列を比較して大きいか小さいかを数字で返却します
	int ans1 = my_strcmp(aTest, bTest);

	//返却された値でそれぞれのcase に向かい文字列を比較する
	switch(ans1){

	//0が返却されたとき、同じ文字列です
	 case 0 : cout << "等しい文字列です\n"; break;

	 //１が返却されたとき、文字列aの方が辞書では後ろにあります
	 case 1 : cout << "文字列 a が大きいです\n"; break;

	 //-１が返却されたとき、文字列bの方が辞書では後ろにあります
	 case -1 : cout << "文字列 b が大きいです\n"; break;
	 }

	 // 関数の呼び出し指定した長さまでで文字列を比較して大きいか小さいかを数字で返却します
	 int ans2 = my_strncmp(cTest,dTest,n);

	 //返却された値でそれぞれのcase に向かい文字列を比較する
	 switch(ans2){

	 //0が返却されたとき、同じ文字列です
	 case 0 : cout << "等しい文字列です\n"; break;

	 //１が返却されたとき、文字列aの方が辞書では後ろにあります
	 case 1 : cout << "文字列 c が大きいです\n"; break;

	 //-１が返却されたとき、文字列bの方が辞書では後ろにあります
	 case -1 : cout << "文字列 d が大きいです\n"; break;
	 }

	return 0;
}

//関数 文字列を比較して整数を返す
//仮引数 比較する文字列を指しているそれぞれ先頭のポインタ s1 s2
//返却値 大きいか小さいかを整数で返却する

int my_strcmp(const char* s1, const char* s2)
{
	int answer = 0;		//文字を比較したとき、大きいか小さいかを判断するため返却します

	//文字列の要素数が違うため、文字列のどちらかが終端に行くまで比較を行います
	for (int i = 0;s1[i] || s2[i]; i++) {

		//比較していく中で、違う文字を発見しました
		//文字列aのほうが、辞書で後ろにあります
		if((s1)[i] > (int)s2[i]) {

			//文字列aの方が大きい証として
			//インクリメントします
			answer++;

			//一度でも見つけたら、終了します
			break;

		//比較していく中で、違う文字を発見しました
		//文字列bのほうが、辞書で後ろにあります
		} else if((int)s1[i] < (int)s2[i]) {

			//文字列ｂの方が大きい証として
			//デクリメントします
			answer--;

			//一度でも見つけたら、終了します
			break;

		}

	}

	// 0 1 -1 の値を返却し、main文で文字列の大きさを判断します
	return answer;
}

//関数 文字列を長さを指定して比較して整数を返す
//仮引数 比較する文字列を指しているそれぞれ先頭のポインタ s1 s2 指定する長さ n
//返却値 大きいか小さいかを整数で返却する

int my_strncmp(const char* s1, const char* s2, int n)
{
	int answer = 0;		//文字を比較したとき、大きいか小さいかを判断するため返却します

	//文字列の要素数が違うため、文字列のどちらかが終端に行くまで比較を行います
	for (int i = 0;s1[i] || s2[i]	||	i < n; i++) {

		//比較していく中で、違う文字を発見しました
		//文字列aのほうが、辞書で後ろにあります
		if((s1)[i] > (int)s2[i]) {

			//文字列aの方が大きい証として
			//インクリメントします
			answer++;

			//一度でも見つけたら、終了します
			break;

		//比較していく中で、違う文字を発見しました
		//文字列bのほうが、辞書で後ろにあります
		} else if((int)s1[i] < (int)s2[i]) {

			//文字列ｂの方が大きい証として
			//デクリメントします
			answer--;

			//一度でも見つけたら、終了します
			break;

		}

	}

	// 0 1 -1 の値を返却し、main文で文字列の大きさを判断します
	return answer;


}
