#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat's main constructor called." << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	this->type = type;
	std::cout << "WrongCat's constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	std::cout << "WrongCat's copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called." << std::endl;
}

std::string		WrongCat::getType() const
{
	return this->type;
}

void	WrongCat::setType(std::string type)
{
	this->type = type;
}

void	WrongCat::makeSound(void)
{
	std::cout << "Meeoooowwwww." << std::endl;
}
