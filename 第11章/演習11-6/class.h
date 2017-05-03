/*
 * class.h
 *
 *  Created on: 2017/04/28
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<string>
#include"date.h"

class Human{

	std::string Name;
	float Omosa;
	float Takasa;
	Date open;
public:
	Human();
	Human(std::string name,float omosa,float takasa,const Date& tmp);

	std::string name() { return Name; }
	float omosa() { return Omosa; }
	float takasa() { return Takasa; }
	Date opening() const { return open; }

	void genryou(float omosa);
	void zouka(float omosa);
};




#endif /* CLASS_H_ */
