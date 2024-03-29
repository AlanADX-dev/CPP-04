#ifndef CAT_HPP
# define CAT_HPP

#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	brain;

	protected:
		std::string type;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		~Cat();

		void	makeSound(void);

};




#endif
