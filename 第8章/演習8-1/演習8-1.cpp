// 演習8-1 文字列の途中にナル文字を入れた場合どのようになるか考察すること

#include<iostream>

using namespace std;

int main()
{
	char a[] = "ABC\0DEF";// ナル文字をCDの間に入れる 通常、ナル文字は文字列の最後に
							// 置かれる
	cout << "配列aに " << a << " が格納せれています。";

	return 0;
}

// C の後に ナル文字が入ることによって文字列が区切られ、ABC だけが表示されます。
