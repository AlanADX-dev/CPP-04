#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's main constructor called." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal's constructor called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal's copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called." << std::endl;
}

std::string		Animal::getType() const
{
	return this->type;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound(void)
{
	std::cout << "Animal make a sound." << std::endl;
}
