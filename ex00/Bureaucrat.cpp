/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:50 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/12 20:28:08 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	_grade = 0;
}

Bureaucrat::Bureaucrat(const Bureaucrat& real)
{
	this->_name = real.getName();
	this->_grade = real.getGrade();
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& real)
{
	if (*this != real)
	{
		this->_name = real.getName();
		this->_grade = real.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name (name)
{
	_grade = grade;
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);	
}

void Bureaucrat::increment()
{
	// first check and call exception if outside range
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
		
	_grade--;
	
	// throw exception if incremented grade is out of range?
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

}

void Bureaucrat::decrement()
{
	// first check and call exception if outside range
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
		
	_grade++;
	
	// throw exception if decremented grade is out of range?
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}