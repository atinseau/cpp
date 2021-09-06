#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

# include <iostream>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);

		PresidentialPardonForm&		operator=(PresidentialPardonForm const &src);

		virtual void execute(const Bureaucrat & rhs);
};



std::ostream &		operator<<(std::ostream &o, PresidentialPardonForm const &src);

#endif