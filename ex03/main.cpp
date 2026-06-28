/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/28 13:03:03 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{
	srand(time(NULL));
	
	try {
		Intern internA;
		AForm* rrf = internA.makeForm("robotomy request", "Bender");
		Bureaucrat bob("Bob", 2);
		bob.signAForm(*rrf);
		bob.executeForm(*rrf);

		delete rrf;

		std::cout << std::endl;

		Intern internB;
		AForm* scf = internB.makeForm("shrubbery creation", "home");
		bob.signAForm(*scf);
		bob.executeForm(*scf);		
		delete scf;

		std::cout << std::endl;

		Intern internC;
		AForm* ppf = internC.makeForm("presidential pardon", "jfk");
		bob.executeForm(*ppf);				
		delete ppf;

		std::cout << std::endl;

		Intern internD;
		AForm* huh = internD.makeForm("huh", "??");	
		delete huh;
		
		std::cout << std::endl;
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
}