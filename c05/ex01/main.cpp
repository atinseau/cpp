
#include "Bureaucrat.hpp"

int main(void)
{

	Bureaucrat *bill;

	try 
	{
		bill = new Bureaucrat();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bill << std::endl;

	Bureaucrat *client = NULL;

	try 
	{
		client = new Bureaucrat("client", 155);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;

	}

	if (client)
		std::cout << client << std::endl;


	try
	{
		client = new Bureaucrat("client", -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	if (client)
		std::cout << client << std::endl;


	
	try
	{
		client = new Bureaucrat("client", 8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	if (client)
		std::cout << client << std::endl;


	Form *forms = new Form("Buy apple", 1, 8);
	std::cout << *forms << std::endl;
	std::cout << forms->getName(*client) << std::endl;

	forms->beSigned(*client);

	delete client;

	try
	{
		client = new Bureaucrat("client", 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << forms->getName(*client) << std::endl;

	forms->beSigned(*client);

	delete bill;
	delete client;

	return (0);
}