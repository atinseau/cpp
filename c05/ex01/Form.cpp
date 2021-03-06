
#include "Form.hpp"

Form::Form(void):
	_name("Default contract"),
	_sign_required_grade(MAX),
	_exec_required_grade(MAX)
{
	_signed = false;
}

Form::Form(std::string name, int sign_required_grade, int exec_required_grade):
	_name(name),
	_sign_required_grade(sign_required_grade),
	_exec_required_grade(exec_required_grade)
{
	_signed = false;
}

Form::~Form(void) 
{}

Form::Form(Form const &src):
	_name(src._name),
	_sign_required_grade(src._sign_required_grade),
	_exec_required_grade(src._exec_required_grade)
{
	_signed = src._signed;
}

Form& Form::operator=(Form const &src) 
{
	if (this == &src)
		return (*this);
	Form *tmp = new Form (src);
	return (*tmp);
}

void Form::authorized(int grade, const Bureaucrat & rhs) const
{
	if (rhs.getGrade() > grade)
		throw Form::GradeTooHighException();
}

std::string Form::getName(const Bureaucrat & rhs) const
{
	try
	{
		authorized(_exec_required_grade, rhs);
		return (_name);
	}
	catch (std::exception &e)
	{
		std::cerr << rhs.getName() << " cannot execute because grade is too high" << std::endl;
		return ("unknown");
	}
}

std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getSignGrade(void) const
{
	return (_sign_required_grade);
}

int Form::getExecGrade(void) const
{
	return (_exec_required_grade);
}

void Form::beSigned(const Bureaucrat & rhs) 
{
	try
	{
		authorized(_sign_required_grade, rhs);
		_signed = !_signed;
		rhs.signForm(*this);
	}
	catch (std::exception & e)
	{
		std::cerr << rhs.getName() << " cannot sign because the grade is too high" << std::endl;
		return ;
	}
}

std::ostream & operator<<(std::ostream &o, Form const &src) 
{
	o << "Form name: " << src.getName() << " | signed: " << src.getSigned() << " | required sign grade: " << src.getSignGrade() << " | required exec grade: " << src.getExecGrade();
	return (o);
}
