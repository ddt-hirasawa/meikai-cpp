#include"class.h"

Human::Human(std::string name,float omosa,float takasa,const Date& tmp) :
	Name(name),Omosa(omosa),Takasa(takasa),open(tmp)
{
}

void Human::genryou(float omosa)
{
	Omosa -= omosa;
}
void Human::zouka(float omosa)
{
	Omosa += omosa;
}

std::ostream& operator<<(std::ostream& s,const Date& x)
{
	s << " 誕生日 : "<< x.year() << "年" << x.month() << "月" << x.day() << "日\n";

	return s;
}
