/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:25:50 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/03/23 23:52:44 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	_grade = 0;
}

// read: https://www.mygreatlearning.com/blog/exception-handling-in-cpp/ 

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
	_grade--;
	// throw exception if incremented grade is out of range?

}

void Bureaucrat::decrement()
{
	// first check and call exception if outside range
	_grade++;
	// throw exception if decremented grade is out of range?
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}