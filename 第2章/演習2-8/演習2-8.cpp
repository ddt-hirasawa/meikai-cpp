
#include<iostream>

using namespace std;

int main()
{
	int sample1,sample2;// 比較する変数の定義 両方キーボードから読み込むため 初期化はいらない
	int diff;			// 2値の差を代入する変数を定義

	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数a :";
	// cin で sample1に値を代入する部分
	cin >> sample1;
	// 実数であるならば どの値でも受け付ける 変数を代入する部分
	cout << "整数b :";
	// cin で sample2に値を代入する部分
	cin >> sample2;

	diff = (sample1 >= sample2 ? sample1-sample2 : sample2-sample1);// 条件演算子を使った場合に変更しました。
																	//条件式で sample1 のほうが大きい場合 左側の値が代入し
																	// そうでないならば 右側の値を代入することによって 正の値を代入する
	//条件式によって true で 左側の値が false で 右側の値が代入されるので
	//必ず正の値になります。
	cout << "入力された値の差は " << diff << " です。";

	// 変更前
	/*// 仮に a = 5 b = 4 ならば 最初のif文を通過し その差 1 を表示する
	if(a>=b) cout << "差は" << a-b << "です。";
	// 仮に a = 4 b = 6 ならば 次のの else if文を通過し その差 2 を表示する
	else if(a<=b) cout << "差は" << b-a << "です。";
*/
	return 0;
}
