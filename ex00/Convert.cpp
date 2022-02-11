/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:36:22 by adidion           #+#    #+#             */
/*   Updated: 2022/02/11 10:51:46 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str): _str(str)
{
	return ;
}

Convert::Convert(const Convert &obj )
{
	_str = obj.getStr();
}

Convert	&Convert::operator=( const Convert &obj )
{
	_str = obj.getStr();
	return (*this);
}

Convert::~Convert()
{
	return ;
}

std::string Convert::getStr() const
{
	return (_str);
}

Convert::operator double()
{
	double d = 0;
	try
	{
		d = stod(_str);
		std::cout << "double: " << d << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
		return (d);
	}
	return (d);
}

Convert::operator float()
{
	float f = 0;
	try
	{
		f = stof(_str);
		std::cout << "float: " << f << "f" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
		return (f);
	}
	return (f);
}

Convert::operator int()
{
	int d = 0;
	try
	{
		d = stoi(_str);
		std::cout << "int: " << d << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
		return (d);
	}
	return (d);
}

Convert::operator char()
{
	long long d = 0;
	char c = 0;
	try
	{
		d = stoll(_str);
	}
	catch(const std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		return (c);
	}
	c = static_cast<char>(d);
	if (c < 32 || c > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
		return (0);
	}
	std::cout << "char: '" << c << "'" <<std::endl;
	return (c);
}
