#include "Animal.h"

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter name: ";
	istream >> m_name;

	ostream << "Enter lifespan: ";
	istream >> m_lifespan;
}

void Animal::Wrtie(std::ostream& ostream)
{
	ostream << "Name: " << m_name << std::endl;
	ostream << "Lifespan: " << m_lifespan << std::endl;
}
