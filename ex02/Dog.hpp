#ifndef DOG_HPP
# define DOG_HPP

#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	brain;

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
