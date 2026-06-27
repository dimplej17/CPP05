/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:08:20 by djanardh          #+#    #+#             */
/*   Updated: 2026/06/27 17:25:10 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
	std::string _target;
	
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& real);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& real);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(std::string target);
	
	void executeFormAction() const; 
};

#endif