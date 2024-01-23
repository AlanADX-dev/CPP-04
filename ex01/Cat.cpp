#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat's main constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "Cat's copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	this->type = copy.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called." << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << "Meeoooowwwww." << std::endl;
}
