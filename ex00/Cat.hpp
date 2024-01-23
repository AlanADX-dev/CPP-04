#ifndef CAT_HPP
# define CAT_HPP

#include<iostream>
#include "Animal.hpp"

class	Cat : public Animal
{
	private:

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
