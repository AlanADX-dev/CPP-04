#ifndef DOG_HPP
# define DOG_HPP

#include<iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	private:

	protected:
		std::string type;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		~Dog();

		void	makeSound(void);

};




#endif
