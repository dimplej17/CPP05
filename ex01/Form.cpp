/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:29:04 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/13 19:31:38 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade_sign(150), _grade_exec(150)
{
	_signed = false;
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const Form& real) : _name(real.getName()), _grade_sign(real.getGradeSign()), _grade_exec(real.getGradeExec())
{
	this->_signed = real.getSigned();
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form& Form::operator=(const Form& real)
{
	if (this != &real)
	{
		this->_signed = real.getSigned();
	}
	std::cout << "Form Copy Assignmnet Operator called" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getGradeSign(void) const
{
	return (_grade_sign);
}

int Form::getGradeExec(void) const
{
	return (_grade_exec);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	_signed = false;
	std::cout << "Form Parameterised Constructor called" << std::endl;
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	
	if (_grade_sign > 150 || _grade_exec >  150)
		throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() > _grade_sign)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		_signed = true;
		std::cout << "Form was successfully signed" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "Form Name: " << obj.getName() << ", Form signed or not: " << 
		obj.getSigned() << ", Grade required to sign: " << obj.getGradeSign() 
		<< ", Grade required to execute: " << obj.getGradeExec() << ".";
	return (os);
}
