/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:50 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/13 17:56:27 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	_grade = 150;
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& real) : _name(real.getName())
{
	this->_grade = real.getGrade();
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& real)
{
	if (this != &real)
	{
		this->_grade = real.getGrade();
	}
	std::cout << "Bureaucrat Copy Assignmnet Operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	_grade = grade;
	std::cout << "Bureaucrat Parameterised Constructor called" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (_grade > 150)
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
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
		
	_grade--;
	
	// throw exception if incremented grade is out of range?
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	
	std::cout << "Grade successfully incremented" << std::endl;

}

void Bureaucrat::decrement()
{
	// first check and call exception if outside range
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
		
	_grade++;
	
	// throw exception if decremented grade is out of range?
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();

	std::cout << "Grade successfully decremented" << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}