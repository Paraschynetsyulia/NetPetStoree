#pragma once
#include"Reposutorii.h"
class Repository {
public:
	Reposutorii** data;
	int n;
	int cur;
	bool sync;
	bool Add(Reposutorii*);
	virtual void ReadFromFile() {}
	virtual void WriteToFile() {}

	Repository(bool sync = 0);
	~Repository();
};
