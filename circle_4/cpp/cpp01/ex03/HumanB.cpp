/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhulee <minhulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:30:29 by minhulee          #+#    #+#             */
/*   Updated: 2024/08/08 14:54:13 by minhulee         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB :: " << this->name << " create...\n" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB :: " << name << " kill...\n" << std::endl;
}

void	HumanB::attack(void) const
{
	if (!weapon)
		std::cout << name << " has no Weapon...\n" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType()
				  << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}
