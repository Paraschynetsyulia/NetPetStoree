#include "StoreRepository.h"
#include <fstream>
using namespace std;

StoreRepository::StoreRepository(bool sync) : Repository(sync)
{
	ReadToFile();
}

StoreRepository::~StoreRepository()
{
}

void StoreRepository::ReadToFile()
{
	ifstream fin("Store.txt");
	int maxLen = 50;
	char* name = new char[maxLen],
		* address = new char[maxLen];
	while (!fin.eof())
	{
		fin.get(name, maxLen);
		fin.get();
		fin.get(address, maxLen);


		NetPetShop NetPetShop(name, address);
		Add(NetPetShop);
	}

	fin.close();

	delete[] name;
	delete[] address;

}

void StoreRepository::WriteToFile()
{
	ofstream fout("Store.txt");

	for (int i = 0; i <= cur; i++)
	{
		NetPetShop* NetPetShopp = (NetPetShop*)data[i];

		fout << NetPetShopp->GetName() << ","
			<< NetPetShopp->GetAddress();

		if (i < cur)
			fout << endl;
	}

	fout.close();
}
bool StoreRepository::Add(NetPetShop& NetPetShopp)
{
	return Repository::Add(&NetPetShopp);
}
