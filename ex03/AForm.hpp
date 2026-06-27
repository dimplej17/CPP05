/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:48:53 by dimplejanar       #+#    #+#             */
/*   Updated: 2026/06/27 15:07:13 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class AForm
{
	private:
	const std::string _name;
	bool _signed;
	const int _grade_sign;
	const int _grade_exec;	
	
	public:
	AForm();
	AForm(const AForm& real);
	AForm& operator=(const AForm& real);
	virtual ~AForm(); // If no virtual keyword, deleting via base pointer breaks
	
	AForm(std::string name, int grade_sign, int grade_exec);

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
	
	class FormNotSignedException : public std::exception
	{
		public:
		const char* what() const throw();	
	};
	
	void beSigned(Bureaucrat& obj);
	void execute(Bureaucrat const & executor) const; 
	virtual void executeFormAction() const = 0; // pure virtual()
};
std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif