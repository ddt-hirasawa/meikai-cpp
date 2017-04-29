// 演習3-18 List 3－13 setw操作子を使い九九を表示するプログラムで
// setw操作子を使わずに 同様の出力を行う

#include<iostream>

using namespace std;

int main()
{
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			 // 変更箇所
			// 表示がずれていくのは 1桁であったり2桁であったりしているのが理由です
			// そのため、1桁のとき空白文字を表示するように変更しました。
			if(i*j < 10) cout << " ";

			cout << i*j << " ";
		}
		cout << "\n";
	}
	return 0;
}
