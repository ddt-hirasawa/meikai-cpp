// 演習 4-12 列挙体 トランプの記号を４つの列挙子として定義する
// キーボードから読み込み確認する

#include<iostream>

using namespace std;

int main()
{
	// 列挙体名 トランプとして ダイア ハート クラブ スペード を定義
	//0 から順に整数値が割りふられます
	enum tranp {dia,heart,club,spade,Invalid};

	int type;// キーボードから読み込みための変数を定義する

	// キーボードから値を読み込む部分 テキストと違い 度の値でも構わない
	cout << "0..ダイア   1..ハート   2..クラブ   3..スペード : \n";cin >> type;

	// Invalid か 5 以上の値 もしくは 負の値が入力されていれば プログラム終了
	if(type >= Invalid || dia > type){
		// static_castでint型　を　列挙体 を に変換している
		// ここに来る値は0～4の値に限られる
		tranp selected = static_cast<tranp>(type);
		// 列挙体に変換された値でswitch文に入る
		// 例外はないため default は必要ない
		switch(selected){
		//ダイヤが選択されました ダイヤと表示しbreak
		case dia : cout << "ダイヤ\n"; break;
		//ハートが選択されました ハートと表示しbreak
		case heart : cout << "ハート\n"; break;
		//クラブが選択されました クラブと表示しbreak
		case club : cout << "クラブ\n"; break;
		//スペードが選択されました スペードと表示しbreak
		case spade :cout << "スペード\n"; break;
		//	該当なし すぐさま breakする
		case Invalid : break;
		}
	}

}
