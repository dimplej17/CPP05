/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:10:03 by djanardh          #+#    #+#             */
/*   Updated: 2026/06/27 17:26:52 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
	std::string _target;
	
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& real);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& real);
	~PresidentialPardonForm();

	PresidentialPardonForm(std::string target);
	
	void executeFormAction() const;
	
};

#endif