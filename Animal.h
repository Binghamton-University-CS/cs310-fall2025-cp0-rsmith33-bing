#include <iostream>
#include <stdlib.h>

class Animal
{
	public:
		//constructors
		Animal(std::string speciesName, unsigned int discoveryYear);
		Animal();

		//function
		void display();

	private:
		std::string species;
		unsigned int year_discovered;
};
