#include "Animal.h"

class AnimalsInZoo
{
	public:
		//Constructors
		AnimalsInZoo(Animal a);
		AnimalsInZoo();

		//Functions
		void display();
	
	private:
		int numAnimals;
		Animal animal;
};
