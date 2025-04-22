#include <iostream>
#include "Database.h"
#include "Bird.h"

Database::~Database()
{
	for (Animal* animal : m_animals)
	{
		delete animal;
	}
	m_animals.clear();
}

void Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;

	switch (type)
	{
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Mammal:
		//animal = new Mammal;
		break;
	default:
		break;
	}

	animal->Read(std::cout, std::cin);

	m_animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal* animal : m_animals)
	{
		animal->Wrtie(std::cout);
	}
}

void Database::Display(std::string name)
{
}

void Database::Display(Animal::eType type)
{
}
