#ifndef Store_H
#define Store_H
#include"Reposutorii.h"
#include<string>
using namespace std;

class NetPetShop :public Reposutorii
{
	string name;
	string address;

public:
	NetPetShop(string = "", string = "Lviv");
	virtual void Write();

	string GetName();
	string GetAddress();
};

#endif 

