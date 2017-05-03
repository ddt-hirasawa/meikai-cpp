/*
 * class.h
 *
 *  Created on: 2017/05/02
 *      Author: admin
 */

#ifndef CLASS_H_
#define CLASS_H_

#include<iostream>

class Boolean{
public:
	enum boolean {False,True};

private:
	boolean v;
public:
	Boolean() : v(False) {}

	Boolean(int val) : v(val == 0 ? False : True) {}

	operator int() const {return v;}

	operator const char*() const {return v == False ? "False" : "True";}

	// 変更点 追加した演算子関数!
	// 返却する型は bool型で v と逆の表示を行うためにif文で分岐させる
	bool operator! () const
	{
		// falsenara
		if(v == False)	return true;
		//
			else return false;


};

inline std::ostream& operator << (std::ostream& s,Boolean& x)
{
	return s << static_cast<const char*>(x);
}

#endif /* CLASS_H_ */
