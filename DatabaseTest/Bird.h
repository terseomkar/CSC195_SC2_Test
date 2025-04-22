#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
public:
    eType GetType() { return eType::Bird;  }

    void Read(std::ostream& ostream, std::istream& istream) override;
    void Wrtie(std::ostream& ostream) override;

protected:
    int m_numEggs = 0;

};

