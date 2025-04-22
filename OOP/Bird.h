#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird() {}
	Bird(int limbs, float flight_speed) : Animal(limbs) {
		m_flightSpeed = flight_speed;
		std::cout << "bird constructor\n";
	}
	void Speak() override;
protected:
	float m_flightSpeed = 0.0f;
};