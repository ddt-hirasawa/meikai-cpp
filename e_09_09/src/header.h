/*
演習9-9 演習9－6で内部結合をもつ識別子を、名前なしの名前空間に属するように書き換える

作成日 2017年5月9日

作成者 平澤敬介
*/

//現在時刻で乱数の種を生成するコマンド
void initialize();

//乱数で 0 ～ 999の値を発生させるコマンド
// 変更点 宣言を void から int に変えることで変数の返却を行う
int get_no();

//入力した値を判定するコマンド
int judge(int cand);

//キーボードからの値を入力するコマンド
int input();

//数当てゲームを続けるかどうか判別するコマンド
bool confirm_retry();

extern int max_no;


// 変更点無し
