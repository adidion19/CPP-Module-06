/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:18:19 by adidion           #+#    #+#             */
/*   Updated: 2022/02/10 17:44:15 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* a)
{
	return	(reinterpret_cast<uintptr_t>(a));
}

Data* deserialize(uintptr_t i)
{
	return	(reinterpret_cast<Data *>(i));
}

int main()
{
	{
		Data *a = new Data;
		a->str = "test";
		uintptr_t i = 60;
		std::cout << a << "   " << a->str << std::endl;
		i = serialize(a);
		std::cout << a << "   " << a->str << std::endl;
		a = deserialize(i);
		std::cout << a << "   " << a->str << std::endl;
		delete a;
	}
}