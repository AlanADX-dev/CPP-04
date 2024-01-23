#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's main constructor called." << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = {""};
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	std::cout << "Brain's operator copy called." << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor called." << std::endl;
}
