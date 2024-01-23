#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	// WRONG TESTS

	WrongAnimal* Wmeta = new WrongAnimal();
	WrongAnimal* Wi = new WrongCat();

	std::cout << Wi->getType() << " " << std::endl;

	Wi->makeSound();
	Wmeta->makeSound();

	delete Wmeta;
	delete Wi;
	return 0;
}
