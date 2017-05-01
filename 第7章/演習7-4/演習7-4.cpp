// 演習7-4 typeid演算子を使って、List7-10の関数reverceの仮引数が配列ではなく
// ポインタであることを確認せよ

#include<iostream>
// typeid演算子を使うためのライブラリ
#include<typeinfo>

using namespace std;

void reverse(int a[],int n);

int main()
{
	const int n = 5;
	int c[n];

	for(int i=0;i < n;i++){
		cout << "c[" << i << "] : ";
		cin >> c[i];
	}
	// 変更点 typeid演算子によりaの型を表示している 配列
	cout << "配列c " << typeid(c).name() << "\n"
			<< "配列a ";

	reverse(c,n);

	cout << " a は配列ではなくポインタです。\n";

	cout << "要素の並びを反転しました。\n";

;
	for(int i=0;i < n;i++)
		cout << "c[" << i << "] = " << c[i] << "\n";

	return 0;
}

void reverse(int a[],int n)
{
	for(int i=0;i < n/2;i++){
		int t = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = t;
	}
	// 変更点 typeid演算子によりaの型を表示している ポインタ
		cout << typeid(a).name() << "\n";
}

//実行結果
/*c[0] : 5
c[1] : 4
c[2] : 5
c[3] : 6
c[4] : 4

配列c A5_i
配列a Pi

 a は配列ではなくポインタです。
要素の並びを反転しました。
c[0] = 4
c[1] = 6
c[2] = 5
c[3] = 4
c[4] = 5
 * ,main内の配列は A5_iと表示されは要素5の配列であることがわかる
 * 関数内でも配列があるため、同じ表示が出るようにも思えるが
 * 結果は Piと表示される Piはポインタのことなので関数内ではポインタが使われていることがわかる
 *
 *
 */
