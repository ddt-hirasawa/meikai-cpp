// 演習1-2 using namespace std 部分を削除した場合、
// cout をコンパイルするために 個別に名前空間を指定しなければならない
#include<iostream> // 入出力のヘッダ

// using namespace std;

// プログラムのメイン部分 始まり これ以降の文が順次実行される
int main()
{
	// 抽出子 << から文字が流れていき出力される。
	std::cout << "初めてのC++プログラム。\n";
	// 抽出子 << から文字が流れていき出力される。
	std::cout << "画面に出力しています。\n";

 // プログラム終了
	return 0;
}//  プログラムのメイン部分 終わり
// cout にそれぞれ名前空間 stdを使う指示を出さなければならないです。
