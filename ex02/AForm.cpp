/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:09:35 by djanardh          #+#    #+#             */
/*   Updated: 2026/06/27 17:34:41 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _grade_sign(150), _grade_exec(150)
{
	_signed = false;
	std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm(const AForm& real) : _name(real.getName()), _grade_sign(real.getGradeSign()), _grade_exec(real.getGradeExec())
{
	this->_signed = real.getSigned();
	std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& real)
{
	if (this != &real)
		this->_signed = real.getSigned();
	std::cout << "AForm Copy Assignmnet Operator called" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

std::string AForm::getName(void) const
{
	return (_name);
}

bool AForm::getSigned(void) const
{
	return (_signed);
}

int AForm::getGradeSign(void) const
{
	return (_grade_sign);
}

int AForm::getGradeExec(void) const
{
	return (_grade_exec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

AForm::AForm(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	_signed = false;
	std::cout << "AForm Parameterised Constructor called" << std::endl;
	if (_grade_sign < 1 || _grade_exec < 1)
		throw AForm::GradeTooHighException();
	
	if (_grade_sign > 150 || _grade_exec >  150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() > _grade_sign)
		throw AForm::GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << "AForm was successfully signed" << std::endl;
	}
}

void AForm::executeFormAction() const {}

// You must check that the form is signed and that the grade of the bureaucrat 
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception
void AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	executeFormAction(); // polymorphic call
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << "AForm Name: " << obj.getName() << ", AForm signed or not: " << 
		obj.getSigned() << ", Grade required to sign: " << obj.getGradeSign() 
		<< ", Grade required to execute: " << obj.getGradeExec() << ".";
	return (os);
}