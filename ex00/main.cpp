/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/13 17:58:14 by dimplejanar      ###   ########.fr       */
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
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// check parameterised constructor - incorrect
	try {
		Bureaucrat b("Bob", 0);
		std::cout << b << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	// check parameterised constructor, increment, decrement
	try {
		Bureaucrat b("Bob", 3);
		std::cout << b << std::endl;
		b.increment();
		std::cout << b << std::endl;
		Bureaucrat c("Cod", 149);
		std::cout << c << std::endl;
		c.decrement();
		std::cout << c << std::endl;
		c.decrement();
		std::cout << c << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}