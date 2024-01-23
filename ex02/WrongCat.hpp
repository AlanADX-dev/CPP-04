#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include<iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:

	protected:
		std::string type;

	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& copy);
		~WrongCat();


		std::string getType() const ;
		void setType(std::string type);
		void	makeSound(void);

};




#endif
