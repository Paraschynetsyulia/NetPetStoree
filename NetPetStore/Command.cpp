#include "Command.h"
#include <iostream>
#include <fstream>
using namespace std;

Command::Command()
{
}

Command::~Command()
{

}

void Command::Addanimals(animals& animals)
{
	animalRepository.Add(animals);
}


void Command::Writeanimals()
{
	animalRepository.ReadToFile();
}

string Command::GetMostPopularAnimal()
{
	int maxNrkinds = -1;
	string maxkinds = "";

	for (int i = 0; i <= animalRepository.cur; i++)
	{
		int nrOfMakes = 0;
		for (int j = i + 1; j <= animalRepository.cur; j++)
		{
			if (((animals*)animalRepository.data[i])->Getkinds() == ((animals*)animalRepository.data[j])->Getkinds())
				nrOfMakes++;
		}
		if (nrOfMakes > maxNrkinds)
		{
			maxNrkinds = nrOfMakes;
			maxkinds = ((animals*)animalRepository.data[i])->Getkinds();
		}
	}

	return maxkinds;
}

void Command::Cout()
{
	for (int i = 0; i <= animalRepository.cur; i++)
	{
		((animals*)animalRepository.data[i])->Write();
	}

}
