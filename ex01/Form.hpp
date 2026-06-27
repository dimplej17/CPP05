/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 02:29:15 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 13:09:23 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
	private:
	const std::string _name;
	bool _signed;
	const int _grade_sign;
	const int _grade_exec;	
	
	public:
	Form();
	Form(const Form& real);
	Form& operator=(const Form& real);
	~Form();
	
	Form(std::string name, int grade_sign, int grade_exec);

	std::string getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;

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
	
	void beSigned(Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif