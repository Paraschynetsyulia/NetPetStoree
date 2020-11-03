#pragma once
#include"Repository.h"
#include"Animal.h"
class AnimalRepository :public Repository {
public:
	AnimalRepository(bool sync = false);
	~AnimalRepository();
	bool Add(animals& animal);
	void ReadToFile();
	void WriteToFile();

};
