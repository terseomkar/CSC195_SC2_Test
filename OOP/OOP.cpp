// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Dog.h"
#include "Bird.h"

int main()
{
   /* Animal* animal = new Animal;
    animal->Speak();*/

    Dog* dog = new Dog;
    dog->Speak();

    Animal* animal1 = new Dog;
    animal1->Speak();

    //Animal animal2;

    //Animal* pAnimal = &animal2;

    //std::cout << pAnimal->GetLifespan();

    //Animal animal3(3);

    //Animal* pAnimal1 = &animal3;

    //std::cout << pAnimal1->GetLifespan();

    //{

    //    Animal* animal4 = new Animal(5);

    //    std::cout << animal4->GetLifespan();

    //}

    Bird crow(12, 5);

    crow.Speak();

    std::vector<Animal*> animals;
    animals.push_back(new Bird);
    animals.push_back(new Bird);
    animals.push_back(new Dog);

    for (Animal* animal : animals)
    {
        animal->Speak();
    }

    for (Animal* animal : animals)
    {
        delete animal;
    }

    animals.clear();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
