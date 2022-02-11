/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:35:44 by adidion           #+#    #+#             */
/*   Updated: 2022/02/10 16:13:03 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Program use: ./convert <arg>" << std::endl;
		return (1);
	}
	std::string str = av[1];
	std::cout << std::fixed << std::setprecision(1);
	Convert a(str);

	char c;
	double d;
	float f;
	int i;

	c = static_cast<char>(a);
	i = static_cast<int>(a);
	f = static_cast<float>(a);
	d = static_cast<double>(a);
}