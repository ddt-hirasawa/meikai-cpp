//演習9-1 再帰関数を使わずに関数factorialを再現する

#include<iostream>

using namespace std;

int fanc(int);			// テキストの再帰的アルゴリズムを使った関数
int nofanc(int);		// 再帰的アルゴリズムを使わない同様の関数

int main()
{
	int x = 5;		// 階乗する値 fanc と nofanc とで同じ値を表示するか確認する

	//階乗する値と再帰を使った関数と再帰を使わない関数とで表示された値を
		//比べ処理が正常に行われていることを確認する
	cout << "階乗する値 x : " << x
			<< "\n    fanc関数 : " << fanc(x)
			<<"\n  nofanc関数 : " << nofanc(x);

	return 0;
}


int fanc(int n)
{								// n と fanc(n-1) の値を乗算していくが n はデクリメントされ続けていき
	if(n > 0)					//いつかは n = 0 になる。n が 0になればいくら乗算しても 0 にしかならないため
		return n * fanc(n-1);	// n = 0になったならば 1 を返却するようにする。 これで、n = 0になったとき、
	else						//呼び出されていた関数が値を順に返却していき 最終的にx = 5 ならば
		return 1;				//階乗した値 5 * 24 = 120を返却する
}

int nofanc(int n)					//
{									//
	int cnt = 0;					//再帰を使わないため、n = 0になるまで何度デクリメントされたかを
	int ans;					//知る必要がある。また、n = 0 となったとき 0 を返却しないように
									//返却する変数はあらかじめ 0 で初期化しておく
		for(;n >= 0;n--)			//
			cnt++;					// ここで、何度デクリメントされたかカウントし後の処理で使う
									//
		for(int i=1;i <= cnt;i++){// fanc関数上の n が nofancでは i となり
			if((i-1) > 0)			//fanc関数上の fanc(n) が nofanc では ans として
			ans = ans*(i-1);		//動作する。
			else					//
				ans = 1;			// n = 0になったとき 0 を返却しないように
		}							//1を代入するようにしておく
									//
	return ans;					//
}// nofanc関数終わり
