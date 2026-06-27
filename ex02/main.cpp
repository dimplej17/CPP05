/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 18:28:35 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	// random seed generator for RobotomyRequestForm
	srand(time(NULL));

	// try {
	// 	AForm a;
	// 	std::cout << a << std::endl;
		
	// }
	// catch(std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	
	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		ShrubberyCreationForm scf;
		std::cout << scf << std::endl;
		bob.signAForm(scf);
		bob.executeForm(scf);
		std::cout << scf << std::endl;
	
		std::cout << std::endl;

		Bureaucrat cat("Cat", 2);
		ShrubberyCreationForm home("home");
		cat.signAForm(home);
		cat.executeForm(home);
		std::cout << home << std::endl;

		std::cout << std::endl;
		
		Bureaucrat tom("Tom", 150);
		tom.executeForm(scf);
		
		std::cout << std::endl;
		
		RobotomyRequestForm rrf("stone");
		bob.signAForm(rrf);
		bob.executeForm(rrf);
		tom.executeForm(rrf);
		
		std::cout << std::endl;

		PresidentialPardonForm ppf("jkf");
		bob.signAForm(ppf);
		bob.executeForm(ppf);
		tom.executeForm(ppf);

		std::cout << std::endl;
		
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}