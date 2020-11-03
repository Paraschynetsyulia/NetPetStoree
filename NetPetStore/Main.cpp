#include "Animal.h"
#include "Store.h"
#include "Command.h"
#include"CommandShop.h"
#include"AnimalRepository.h"
#include"StoreRepository.h"
#include"Reposutorii.h"
#include"Repository.h"
#include<string>
#include<iostream>
using namespace std;

void Menu()
{
	Command c;
	CommandStore c2;


	cout << "__________________*********PET STORE*******************________________________" << endl;

	animals a;
	NetPetShop n;
	int maxlen = 100;
	int maxlen1 = 100;
	char* kinds = new char[maxlen],
		* color = new char[maxlen],
		* streets = new char[maxlen],
		* breed = new char[maxlen];
	char* name = new char[maxlen1],
		* address = new char[maxlen1];

	while (true)
	{
		cout << "______<1>View all available products_____" << endl;
		cout << "__________<2>Add a new pet to the pet store_________" << endl;
		cout << "_____________<3>Show the most popular animal_________" << endl;
		cout << "_______________<4> Add a new pet store to the network____" << endl;
		cout << "_________________<0> - Exit__________" << endl;
		cout << "__________________Enter your selection_____________________" << endl;

		char choise;
		cin >> choise;

		bool exit = false;

		switch (choise)
		{
		case '1':
			c.Cout();
			break;
		case '2':
			cout << "Enter information about the animal:" << endl;
			cout << "Kind:" << endl;
			cin >> kinds;
			cout << "Breed:" << endl;
			cin >> breed;
			cout << "Color:" << endl;
			cin >> color;
			a = animals(kinds, breed, color);

			try
			{
				c.Addanimals(a);
			}
			catch (const char* err)
			{
				cout << err << endl;
			}
			break;
		case '3':
			cout << "Most popular kind is " << c.GetMostPopularAnimal() << endl;
			break;
		case '4':
			cout << "Enter information about the new pet store<<<" << endl;
			cout << "Store name<<" << endl;
			cin >> name;
			cout << "Store address<<" << endl;
			cin >> address;
			n = NetPetShop(name, address);
			try
			{
				c2.Addpetshop(n);
			}
			catch (const char* err)
			{
				cout << err << endl;
			}
			break;


		case '0':
			exit = true;
			break;
		default:
			break;
		}

		if (exit)
			break;

		cout << endl << endl;
	}
	delete[]kinds;
	delete[]breed;
	delete[]color;
	delete[]streets;
}

int main()
{
	Menu();
	system("pause");
	return 0;
}