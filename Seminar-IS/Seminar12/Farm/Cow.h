#pragma once
#include "Animal.h"
class Cow :
    public Animal
{
public:
	void makeNoise() const override;
	AnimalType getType() const override;

	Animal* clone() const override;
};

