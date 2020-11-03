#pragma once
#include"Repository.h"
#include"Store.h"
class StoreRepository :public Repository {
public:
	StoreRepository(bool sync = 0);
	~StoreRepository();
	void ReadToFile();
	void WriteToFile();
	bool Add(NetPetShop& NetPetShopp);

};

