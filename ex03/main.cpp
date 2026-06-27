/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:40 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 19:37:17 by djanardh         ###   ########.fr       */
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
		delete rrf;

		std::cout << std::endl;

		Intern internB;
		AForm* scf = internB.makeForm("shrubbery creation", "home");
		delete scf;

		std::cout << std::endl;

		Intern internC;
		AForm* ppf = internC.makeForm("presidential pardon", "jfk");
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