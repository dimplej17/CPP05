/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimplejanardhan <dimplejanardhan@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:26:01 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/13 19:01:11 by dimplejanar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
	private:
	const std::string _name;
	int _grade;

	public:
	// Orthodox Canonical Form
	Bureaucrat(); // default constructor
	Bureaucrat(const Bureaucrat& real); // copy constructor
	Bureaucrat& operator=(const Bureaucrat& real); // copy assignment opereator
	~Bureaucrat(); // destructor

	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw();
	};
	
	Bureaucrat(std::string name, int grade); // parameterised constructor

	std::string getName() const;
	int getGrade() const;
	
	void increment();
	void decrement();

	void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif