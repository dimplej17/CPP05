/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/12 20:34:29 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	// check default constructor
	try {
		Bureaucrat a;
		std::cout << a << std::endl;
	}
	catch {
		
	}

	// check parameterised constructor
	try {
		Bureaucrat b("Bob", 3);
		std::cout << b << std::endl;
	}
	catch {
		
	}
	
}