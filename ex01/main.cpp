#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{


	const Animal* animals[10] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};

	for ( int i = 0; i < 10; i++ )
		delete animals[i];

	return 0;
}

