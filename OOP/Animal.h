#pragma once
#include <iostream>

class Animal
{
public:
	Animal() {
		m_lifespan = 0;
		m_p = new int(30);
		std::cout << "animal constructor\n";
	}

	Animal(int lifespan) { m_lifespan = lifespan; }

	~Animal() {
		delete m_p;
	}

	virtual void Speak() = 0;
	int GetLifespan() { return m_lifespan;  }
	void SetLifespan(int lifespan) { m_lifespan = lifespan; }

protected:
	int m_lifespan;
	int* m_p = nullptr;
};