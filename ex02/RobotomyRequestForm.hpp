/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:10:12 by djanardh          #+#    #+#             */
/*   Updated: 2026/06/27 17:26:06 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "cstdlib"

class RobotomyRequestForm : public AForm
{
	private:
	std::string _target;
	
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& real);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& real);
	~RobotomyRequestForm();

	RobotomyRequestForm(std::string target);
	
	void executeFormAction() const;
	
};

#endif