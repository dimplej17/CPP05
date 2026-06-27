/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 18:37:12 by djanardh          #+#    #+#             */
/*   Updated: 2026/06/27 19:33:46 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern& real)
{
	*this = real;
	std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	std::cout << "Intern Copy Assignmnet Operator called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

static AForm* shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm* robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*form_funcs[]) (std::string) = {shrubbery, robotomy, presidential};
	
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return form_funcs[i] (target);
		}
	}
	std::cout << "Intern: Provided form name does not exist" << std::endl;
	return (NULL);
}
