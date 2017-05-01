//演習6-3 3つの整数値から中央値を返却する関数を作成する

#include<iostream>

using namespace std;

int med(int,int,int);// 関数の宣言 main文の後で関数文を書くために必要

int main()
{
	cout << "中央値を返却します。\n";

	int a[3];

	// 配列に3個整数を格納するためループ処理を行う
	for(int i=0;i<3;i++){
		cout << "a[" << i << "] :";
		cin >> a[i];
	}

	// 関数呼び出し部分 配列の中から中央値を出し変数m に代入する
	int m = med(a[0],a[1],a[2]);

	cout << "中央 :" << m << "です。";

	return 0;
}

// 中央値を a b c の中から出し return により変数に返却する
int med(int a,int b,int c)
{
	int m = a;
	if(m > b && b > c){ m = b; return m;
	}else if(c > b && b > m){ m = b; return m;
	}else if(m > c && c > b){ m = c; return m;
	}else if(b > c && c > m){ m = c; return m;
	}else if(m < b && b > c){ return m;
	}else if(m > b && b < c){ return m;
	}else{
		return m;
	}
}
