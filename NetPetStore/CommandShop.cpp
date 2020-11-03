#include "CommandShop.h"
#include <iostream>
#include <fstream>
using namespace std;

CommandStore::CommandStore()
{
}

CommandStore::~CommandStore() {

}

void CommandStore::Addpetshop(NetPetShop& NetPetShopp)
{
	storeRepository.Add(NetPetShopp);
}

void CommandStore::Writepetshop()
{
	storeRepository.ReadToFile();
}