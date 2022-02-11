/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:36:44 by adidion           #+#    #+#             */
/*   Updated: 2022/02/10 16:15:34 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <iomanip>

class	Convert
{
	private:
		std::string _str;
	public:
		Convert(std::string str);
		Convert( const Convert &obj );
		Convert &operator=( const Convert &obj );
		~Convert();
		std::string getStr() const;
		operator char();
		operator int();
		operator float();
		operator double();
};

#endif