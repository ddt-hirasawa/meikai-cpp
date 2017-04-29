// 演習4-2 int型の最大値から最小値 および unsigned型の最小値から最大値の
// 8進数 10進数 16進数 をならべて表記する

#include<iostream>

using namespace std;

// 実際に int型 unsigned型の最大値 最小値を使うと表示する量が膨大になるため
// この演習では #define で定義した値を使い疑似的に行います
#define Int_Max 127	// int 型の最大値 仮
#define Int_Min -128	// int 型の最小値 仮
#define Unsi_max 255	// unsigned型の最大値 仮
#define Unsi_min 0		// unsigned型の最小値 仮

int main()
{
	 // 単なる宣言 これ以降 それぞれの進数を表記していく
	cout << "10進数表記 8進数表記 16進数表記\n";

	for(int i=Int_Min;i<=Int_Max;i++){ // int型　表記
	//for(int i=Unsi_min;i<=Unsi_max;i++){ // unsigned型　表記

		// 10進数 を表示する処理

		cout << "  " << i << "      " ;

		// 表示するときの列をそろえるための空白とif文必ず必要なわけではないです
		if(i >= 0) cout << " ";
		if(i >= 10 && i < 100) cout << " ";
		if(i <= -10 && i > -100) cout << " ";

		// 8進数 を表示する処理
		int a=0; 						// 1桁目
		int b=0; 						// 2桁目
		int c=0; 						// 3桁目
		int d=0; 						// 4桁目
		int e=0; 						// 5桁目
		int f=0; 						// 6桁目
		int tmp1 = i; 					// 変数 10進数の値を変換するため

		// 1桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移る
		a = tmp1 % 8; tmp1 /= 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(a < 0) a *= -1;

		// 2桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移る
		b = tmp1 % 8; tmp1 /= 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(b < 0) b *= -1;

		// 3桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移る
		c = tmp1 % 8; tmp1 /= 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(c < 0) c *= -1;

		// 4桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移る
		d = tmp1 % 8; tmp1 /= 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(d < 0) d *= -1;

		// 5桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移る
		e = tmp1 % 8; tmp1 /= 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(e < 0) e *= -1;

		// 6桁目を格納するため 8で割った余りを記憶する
		// その後、tmp1 を 8で割り 次の桁に移るがここでは6桁目で終わり
		f = tmp1 % 8;

		// 絶対値にするための処理 - 符号をとるために行う
		if(f < 0) f *= -1;

		// 行を合わせるため 必ず必要ではない
		if(i >= -9 && i<=9) cout << "  ";

		// 負の値のとき 8進数を表示する前に - を表示する
		if(i < 0) cout << "-";

		// 正の値のときは 空白文字を表示する
		else cout << " ";

		// 8進数を表示する 各桁を1文字ずつ表示していく
		cout << f << e << d << c << b << a << "    ";

		// 16進数 を表示する処理
		int a1=0; 						// 1桁目
		int b1=0; 						// 2桁目
		int c1=0; 						// 3桁目
		int d1=0; 						// 4桁目
		int e1=0; 						// 5桁目
		int f1=0; 						// 6桁目
		int tmp2 = i; 					// 変数 10進数の値を変換するため

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移る
		a1 = tmp2 % 16; tmp2 /= 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(a1 < 0) a1 *= -1;

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移る
		b1 = tmp2 % 16; tmp2 /= 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(b1 < 0) b1 *= -1;

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移る
		c1 = tmp2 % 16; tmp2 /= 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(c1 < 0) c1 *= -1;

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移る
		d1 = tmp2 % 16; tmp2 /= 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(d1 < 0) d1 *= -1;

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移る
		e1 = tmp2 % 16; tmp2 /= 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(e1 < 0) e1 *= -1;

		// 16で割った余りを記憶する
		// その後、tmp2 を 16で割り 次の桁に移るがここでは6桁目で終わり
		f1 = tmp2 % 16;

		// 絶対値にするための処理 - 符号をとるために行う
		if(f1 < 0) f1 *= -1;

		// 負の値のとき 8進数を表示する前に - を表示する
		if(i < 0) cout << "-";

		// 正の値のときは 空白文字を表示する
		else cout << " ";


		switch(f1){					//6桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << f1;			// 0～9を表示
		}								// 6桁目終わり

		switch(e1){					//5桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << e1;			// 0～9を表示
		}								// 5桁目終わり

		switch(d1){					//4桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << d1;			// 0～9を表示
		}								// 4桁目終わり

		switch(c1){					//3桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << c1;			// 0～9を表示
		}								// 3桁目終わり

		switch(b1){					//2桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << b1;			// 0～9を表示
		}								// 2桁目終わり

		switch(a1){					//1桁目
		case(10) : cout << 'A'; break;// 10 を A と表示
		case(11) : cout << 'B'; break;// 11 を B と表示
		case(12) : cout << 'C'; break;// 12 を C と表示
		case(13) : cout << 'D'; break;// 13 を D と表示
		case(14) : cout << 'E'; break;// 14 を E と表示
		case(15) : cout << 'F'; break;// 15 を F と表示
		default : cout << a1;			// 0～9を表示
		}								// 1桁目終わり
		cout << "\n";					// 改行
	}



	return 0;
}
