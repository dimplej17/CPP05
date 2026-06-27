/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 13:09:01 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Add test cases for copy constructor and copy assignment operators please.

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
		Bureaucrat d("Dad", 3);
		std::cout << d << std::endl;
		d.increment();
		std::cout << d << std::endl;
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