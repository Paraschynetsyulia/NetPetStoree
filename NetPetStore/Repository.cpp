#include"Repository.h"

Repository::Repository(bool sync) {
	this->sync = sync;
	n = 50;
	data = new Reposutorii * [n];
	cur = -1;
	ReadFromFile();
}
Repository::~Repository() {
	WriteToFile();
	delete[]data;
}

bool Repository::Add(Reposutorii* rep) {
	data[++cur] = rep;
	if (sync)
		WriteToFile();
	return true;
}