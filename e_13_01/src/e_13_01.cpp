/*
 演習13-1 日付クラス にテキストで指示している演算子関数を追加しなさい

 1.2つの日付が正しいかどうかの等価演算子 ==			OK
 2.2つの日付がことなっているかどうかの等価演算子 !=	OK
 3.2つの日付の大小を判定する関係演算子 > >= < <=     OK
 4.2つの日付の減算を行う減算演算子 -				OK
 5.日付を翌日に更新する増分演算子 ＋＋				OK
 6.日付を昨日に更新する増分演算子 --				OK
 7.日付をn日進めた日付に更新する複合代入演算子 +=	OK
 8.日付をn日戻した日付に更新する複合代入演算子 -=
 9.日付のn日後の日付を求める加減演算子 +
 10.日付のn日前の日付を求める加減演算子 -

 作成日 2017年5月11日

 作成者 平澤敬介
 */

#include<iostream>
// 日付クラスが定義されているヘッダ
#include"class.h"

using namespace std;

int main() {
	date dToday; // クラスのオブジェクトをデフォルトコンストラクタで呼び出す

	// データメンバの値から挿入子を通して表示される
	cout << "今日の日付 : " << dToday << "\n";

	//データメンバの日付をデクリメントして昨日の日付を表示する
	cout << "昨日の日付 : " << dToday.past() << "\n";

	//減算関数を2回呼び出すことで一昨日の日付を表示する
	cout << "一昨日の日付 : " << dToday.past().past().past() << "\n";

	//データメンバの日付をインクリメントして昨日の日付を表示する
	cout << "明日の日付 : " << dToday.future() << "\n";

	//加算関数を2回呼び出すことで一昨日の日付を表示する
	cout << "明後日の日付 : " << dToday.future().future() << "\n";

	//その年の1月1日から何日経過しているか表示します。
	cout << "元旦から" << dToday.day_of_year() << "日経過しています。\n";

	//返却されてくるbool型の値でうるう年かどうかを判別して表示する
	cout << "今年はうるう年" << (dToday.leap_year() ? "です。" : "ではありません。") << "\n";

	date Select; // 指定したい日付を指定するためのオブジェクト

	cin >> Select;

	//返却されてくるbool型の値でうるう年かどうかを判別して表示する
	cout << "その年はうるう年" << (date::leap_year(Select.year()) ? "です。" : "ではありません。")
			<< "\n";

	// これ以降、演算子関数を使って行きます
	cout << "入力した日は";

	// == 演算子関数 order.cpp
	//今日の日付と比較します
	if (Select == dToday) {

		//演算子関数によって true が返されました
		cout << "同じ日です\n";

		//今日以外の日付が入力されました
	} else {

		//演算子関数によって false が返されました
		cout << "違う日です\n";
	}

	//演算子関数をチェックするため、新たに値を入れます
	cout << "再入力 !=\n";
	//日にちを更新します 同じに日にちでも可
	cin >> Select;

	//演算子関数 != の呼び出し order.cpp
	// == とは真逆になります
	if (Select != dToday) {

		//false
		cout << "同じ日です\n";

		//true
	} else {

		cout << "違う日です\n";
	}

	//演算子関数をチェックするため、新たに値を入れます
	cout << "再入力 <<\n";
	//日にちを更新します 同じに日にちでも可
	cin >> Select;

	//宣言 入力した日を比較します
	cout << "指定した日は";

	//ただし、同じ日付ならば処理はしません
	if (Select == dToday) {

		//tru or false なので 間はないです
		cout << "同じ日です\n";

	//違う日付に限り、処理を行います
	} else {

		//選択した日が未来なら
		if (dToday << Select) {

			//true
			cout << "まだ先です\n";

		//過去なら
		} else {
			//false
			cout << "もう過ぎました\n";
		}
	}

	//演算子関数をチェックするため、新たに値を入れます
	cout << "再入力 - \n";
	//日にちを更新します 同じに日にちでも可
	cin >> Select;

	//宣言 入力した日を比較します
	cout << "指定した日は\n";

	date diff(dToday - Select);		// 演算子関数 - を使ってクラスオブジェクトを生成します

	//今日の日付との差分を表示します
	cout << diff << "差があります\n";

	//演算子関数をチェックします
	cout << "再入力 - \n";


	//宣言 入力した日を比較します
	cout << "指定した日は\n";

	//今日の日付を表示して比較します
	cout <<	dToday	<< "\n";

	//明日の日付です	前置
	cout <<	++dToday	<< "\n";
	//昨日の日付です	後置
	cout << dToday--	<< "\n";

	int let_go;		//何日後かをキーボードからの値で決定します

	//宣言 何日未来の日付ですか？
	cout << "何日後の日付ですか？\n";

	//キーボードからの値で決定 未来の日付
	cin >> let_go;

	date future = dToday += let_go;		//	演算子関数 += の呼び出し部分 クラスオブジェクトfutureに格納します

	// let_go 日後の未来です
	cout << future << "\n";

	int let_buck;		//何日前かをキーボードからの値で決定します

	//宣言 何日過去の日付ですか？
	cout << "何日前の日付ですか？\n";

	//キーボードからの値で決定 過去の日付
	cin >> let_buck;

	date past = dToday -= let_buck;		//	演算子関数 -= の呼び出し部分 クラスオブジェクトpastに格納します

	// let_go 日前の過去です
	cout << past << "\n";





	return 0;
}