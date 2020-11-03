#ifndef ANIMALS_H
#define ANIMALS_H
#include<string>
#include"Reposutorii.h"
using namespace std;

class animals :public Reposutorii
{
	string kinds;
	string model;
	string color;
	int amount;
	int pricee;
	string streets;

public:
	animals(string = "", string = "", string = "", int = 2,
		int = 100, string = "");

	virtual void Write();


	string Getkinds();
	string GetModel();
	string GetColor();
	int Getamount();
	int Getpricee();
	string Getstreet();
};

#endif 
