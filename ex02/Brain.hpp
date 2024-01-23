#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain {

	private:
		std::string		ideas[100];

	protected:

	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& src);
		Brain& operator=(const Brain& copy);

};




#endif
