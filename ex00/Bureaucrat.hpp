/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:26:01 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/03/23 14:52:20 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
	const std::string _name;
	int _grade;

	public:
	Bureaucrat(); // default constructor
	Bureaucrat(const Bureaucrat& real); // copy constructor
	Bureaucrat& operator=(const Bureaucrat& real); // copy assignment opereator
	~Bureaucrat(); // destructor
	Bureaucrat(std::string name, int grade);

	std::string getName() const;
	int getGrade() const;
	
	void increment(); // first throw/check for exception if grade goes out of range	
	void decrement(); // first throw/check for exception if grade goes out of range	
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif