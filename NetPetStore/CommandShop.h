#ifndef COMMANDSHOP_H
#define COMMANDSHOP_H
#include"Store.h"
#include"StoreRepository.h"

class CommandStore
{
	StoreRepository storeRepository = StoreRepository(true);

public:
	CommandStore();
	~CommandStore();

	void Addpetshop(NetPetShop&);
	void Writepetshop();
};

#endif 

