#include<string>

class Human{

private:
	std::string Name;
	float Omosa;
	float Takasa;
public:
	HUman();
	Human(std::string name,float omosa = 0,float takasa = 0);

	std::string name() { return Name; }
	float omosa() { return Omosa; }
	float takasa() { return Takasa; }

	void genryou(float omosa);
	void zouka(float omosa);
};
