/*
演習9-6 数当てゲーム第2版を変更したプログラムの作成
1.数の範囲を 0 ～ 999
2.プレイヤーは10回までに正解しなければならない
3.入力ミスはカウントしない
4.正解のときは何回で正解したのか、失敗の時は正解の値を表示する

作成日 2017年5月9日

作成者 平澤敬介
*/

#ifndef MATH_H_
#define MATH_H_

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

#endif /* MATH_H_ */
