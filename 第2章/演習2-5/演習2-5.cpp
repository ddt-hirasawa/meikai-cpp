// 演習2－5 演習2-4 を改修して 割り切れなかったときに余りを表示する課題

#include<iostream>/

using namespace std;

int main()
{
	// 基準となる 変数を定義 値の範囲は特にない
	int n;
	// 正の値の入力を促しているが 負の値が入力されても通過する
	cout << "正の整数を入力してください。\n"; cin >> n;

	//最初は 正の値であることの確認を行う 負の値であれば 3で割った場合まで
	//進まない
	if(n<0){ cout << "正ではないあたいが入力されました。";
	// 3で割り切れたとき 割り切れたことを伝える部分
	}else if(n%3 == 0){ cout << "その値は3で割り切れます。";
	// 3で割り切れなかったとき 割り切れなかったことを伝える部分
	// また、n % 3 で3で割ったときの余りを表示する部分 この部分が 変更点
	}else if(n%3 != 0){ cout << "その値を3で割った剰余は" << n%3 << "です。";
	}

	return 0;
}
