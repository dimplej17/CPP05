/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ShrubberyCreationForm.cpp						  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: djanardh <djanardh@student.42heilbronn.	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/06/27 13:10:18 by djanardh		  #+#	#+#			 */
/*   Updated: 2026/06/27 15:22:30 by djanardh		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

// by convention the base class should be initialized first
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& real) : AForm(real), _target(real._target)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& real)
{
	if (this != &real)
	{
		AForm::operator=(real);
		_target = real._target;
	}
	std::cout << "ShrubberyCreationForm Copy Assignmnet Operator called" << std::endl;
	return (*this);
}
	
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}


void ShrubberyCreationForm::executeFormAction() const
{
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file)
	{
		std::cerr << "Error: could not create " << _target << "_shrubbery" << std::endl;
		return ;
	}

	file << "   /\\\n";
	file << "  /**\\\n";
	file << " /****\\\n";
	file << "   ||\n";
	file.close();
}