/*
演習8-1 文字列の途中にナル文字を入れた場合どのようになるか考察すること

作成日 2017年5月8日

作成者 平澤敬介
*/

#include<iostream>

using namespace std;

int main()
{
	char a[] = "ABC\0DEF";			// ナル文字をCDの間に入れる 通常、ナル文字は文字列の最後に
									// 置かれる
	//間にナル文字を入れたときの表示を行う
	cout << "配列aに " << a << " が格納せれています。";

	return 0;
}

// C の後に ナル文字が入ることによって文字列が区切られ、ABC だけが表示されます。
