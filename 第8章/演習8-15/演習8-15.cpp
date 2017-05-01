//演習8-15 文字列の中に含まれる最初の文字列ｘの最初の文字へのポインタを返す関数を作成する

#include<iostream>

#include<cstring>
// 文字列に関する処理が含まれているライブラリ
using namespace std;

 // 文字列の中で最も先頭に位置する文字列の先頭 のポインタを返す関数の宣言
const char* str_match(char*,char*);
int main()
{
	char sample[] = "DDT_KEISUHIRASAWA_KEISUKE"; //この文字列の中から探す 最も先頭の文字列のみ返却
	char tmp[] = "KEISUKE";					//	この文字列が含まれているか探す

		// 関数処理前の文字列の表示を行う
	cout << "文字列 sample " << sample << "\n";

	// tmp と同じ文字列が探す文字列の中に存在する場合
	if(str_match(sample,tmp) != '\0'){
				// char型の文字をtmpと同じ文字のオブジェクトで初期化
		char ptr = *(str_match(sample,tmp));
		// 文字列の中にあるtmp の先頭のオブジェクトを表示し
			// そのオブジェクトへのポインタを表示する
		cout << "tmpのオブジェクトは " << ptr << "\n";
 		cout << "tmpへのポインタは" << &ptr << "です。\n";
	}else
		// tmp と同じ文字列が文字列の中に存在しない場合
		// のみ、この文が表示される。
		cout << "文字tmpは存在しません。\n";

	return 0;
}


 // 文字列s1の中に文字列s2が損じするとき その先頭へののポインタを返す関数
const char* str_match(char* s1,char* s2)
{

	char* ptr = '\0';			//文字列が存在しない場合 ,ナル文字を返却する
	int len1 = strlen(s1);		//探す文字列の要素数を出す
	int len2 = strlen(s2);		//含まれているか探す文字列の要素数を出す

		//探す文字列をナル文字まで走査するためループ処理を行う
	for(int l=0;l <= len1;l++){
		//文字列の互いの先頭が同じ文字のとき
		if(*s1 == *s2){
			//探索する文字列をナル文字の1つ前まで走査する
			for(int i=0;i < len2;i++){
				//文字列を比較して違った場合
				if(*s1++ != *(s2+i)){
					 //文字列を比較する前に戻した後
					for(int cnt=1;cnt<=i;cnt++) s1--;
					//ループから外れ処理を続行する
					break;
				}
				//		ナル文字の1つ手前まで走査できたのなら
				if(i == len2-1){
					//文字列s1をs2の要素数文戻すことで先頭のポインタを指すようにする
					for(int j=0;j < len2;j++) s1--;
					return s1;					//
					}							//
				}								//
			}									//
		//文字列s1がナル文字の１つ手前まで来たのならば
		//		ナル文字を返却する
		if(l == len1-1){		//
			return ptr;
		}						//
		//s1の示す文字を次の文字に進める
		s1++;
	}
	//// 警告抑制のため　実際にはここまで来ない
	return 0;
}
