/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/12 21:46:52 by dimplejanar      ###   ########.fr       */
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

	// check parameterised constructor
	try {
		Bureaucrat b("Boo", 160); // put 0, 160, empty name?, no value for grade? (ideally "default" name and '0' grade should be added)
		std::cout << b << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	// check parameterised constructor
	try {
		Bureaucrat b("Bob", 3); // put empty name?, no value for grade? (ideally "default" name and '0' grade should be added)
		std::cout << b << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}