#include"class.h"

Car::Car(std::string n,int w,int l,int h,double f,int num,double fire_,double tank_,const date& tmp)
	: buy(tmp),Name(n),width(w),length(l),height(h),fuel_level(f),number(num),fire(fire_),tank(tank_)
{
		xp = yp = 0;		// x座標 y座標
}

std::ostream& operator << (std::ostream& s,const date& x)
{
	s << "購入年月日 : " << x.year() << "年" << x.month() << "月" << x.day() << "日\n";
	return s;
}
