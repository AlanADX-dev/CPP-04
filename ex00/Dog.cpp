#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's main constructor called." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << "Dog's copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called." << std::endl;
}

void	Dog::makeSound(void)
{
	std::cout << "WWWOOoooooooffffff !" << std::endl;
}
