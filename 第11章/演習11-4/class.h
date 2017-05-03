/*
 * class.h
 *
 *  Created on: 2017/04/28
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include"Date.h"

class Account{
	std::string full_name;
	std::string number;
	long balance;
	Date open;

public:
	Account();
	Account(std::string name,std::string num,long amnt,int y,int m=1,int d=1);

	void deposit(long tmp);
	void with(long amnt);

	std::string name() const { return full_name; }
	std::string no() const { return number; }
	long bal() const { return balance; }
	Date openDate() const { return open; }

};

std::istream& operator>>(std::istream& s,Account& x);

#endif /* CLASS_H_ */
