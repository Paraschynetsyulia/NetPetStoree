#ifndef COMMAND_H
#define COMMAND_H

#include"Animal.h"
#include"AnimalRepository.h"

class Command
{
protected:
	AnimalRepository animalRepository = AnimalRepository(true);

public:
	Command();
	~Command();

	void Addanimals(animals&);
	void Writeanimals();
	string GetMostPopularAnimal();
	void Cout();

};

#endif 
