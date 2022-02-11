/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:20:13 by adidion           #+#    #+#             */
/*   Updated: 2022/02/11 10:39:29 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	std::srand((unsigned int)std::time(NULL));
	int r = std::rand() % 3;
	if (r == 0)
	{
		Base *a = new A;
		std::cout << "an A Base has been created" << std::endl;
		return (a);
	}
	if (r == 1)
	{
		Base *a = new B;
		std::cout << "an B Base has been created" << std::endl;
		return (a);
	}
	Base *a = new C;
	std::cout << "an C Base has been created" << std::endl;
	return (a);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "It's an A class" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "It's an B class" << std::endl;
		return ;
	}
	std::cout << "It's an C class" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "it's an A class" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "it's an B class" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "it's an C class" << std::endl;
	}
	catch(const std::exception& e)
	{
		;
	}
	
}

int main()
{
	std::cout << "----------------------------" << std::endl;
	std::cout << "| Random base:             |" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *a = generate();
	Base &aRef = *a;
	std::cout << std::endl <<  "----------------------------" << std::endl;
	std::cout << "| void identify(Base* p);  |" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(a);
	std::cout << std::endl << "----------------------------" << std::endl;
	std::cout << "| void identify(Base& p);  |" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(aRef);
	delete a;
	return (0);
}