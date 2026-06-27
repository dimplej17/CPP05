/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 13:09:31 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// should a check for if a form is already signed or not be put? To avoid forms getting signed >1 ?

int main (void)
{
	// check default constructor and incorrect parameterised constructor
	try {
		Form a;
		std::cout << a << std::endl;
		Form b("BirthForm", 0, 40);
		std::cout << b << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	// check parameterised constructor, signing
	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		Form c("SchoolForm", 3, 4);
		std::cout << c << std::endl;
		bob.signForm(c);
		// c.beSigned(bob);
		std::cout << c << std::endl;
		Form d("UniForm", 149, 45);
		std::cout << d << std::endl;
		d.beSigned(bob);
		std::cout << d << std::endl;
		Form e("BruhForm", 1, 1);
		std::cout << e << std::endl;
		e.beSigned(bob);
		std::cout << e << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}