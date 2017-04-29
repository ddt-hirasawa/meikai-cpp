// 演習 3-23-2 List 3-16 を書き換え 平均も出せるようにする

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算しますか。\n";
	cout << "何個加算しますか :"; cin >> n;

	int sum=0;

	// 変更点 平均を出すための変数 ave 加算した回数を数える変数 tmp を追加
	int ave=0;
	int tmp = 0;

	for(int i=0;i<n;i++){
		int t;
		cout << "整数 :";
		cin >> t;
		if(sum + t > 1000){
			cout << "\a合計が1000を超えました。\n最後の数値は無視します\n";
			break;
		}

		// 変更点 合計が1000を超えたとき最後の値は無視されるので、それまでを回数に含ませるため
		// if文の後ろでカウントする
		tmp++;
		sum += t;
	}

	// 変更点 合計をカウントした変数tmp で割ることによって平均を出している
	ave = sum / tmp;

	cout << "合計は" << sum << "です。\n" << "平均は" << ave << "です。\n";
	return 0;
}
