#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal a)
{
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo()
{
	numAnimals = 0;
}

void AnimalsInZoo::display()
{
	std::cout << "Number of animals in the zoo: " << numAnimals << std::endl;
	if(numAnimals > 0)
	{
		animal.display();
	}
}
