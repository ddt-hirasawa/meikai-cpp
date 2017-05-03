#include<string>
#include"human.h"

Human::Human(std::string name ,float omosa,float takasa)
{
	Name = name;
	Omosa = omosa;
	Takasa = takasa;
}

void Human::genryou(float omosa)
{
	Omosa -= omosa;
}
void Human::zouka(float omosa)
{
	Omosa += omosa;
}
