/*
 * 数当て.h
 *
 *  Created on: 2017/04/26
 *      Author: admin
 */

#ifndef MATH_H_
#define MATH_H_

void initialize();
int get_no();			// 変更点 宣言を void から int に変えることで変数の返却を行う
int judge(int cand);
int input();
bool confirm_retry();

extern int max_no;

#endif /* MATH_H_ */




