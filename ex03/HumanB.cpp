/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:26:08 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 16:55:30 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " destroyed" << std::endl;
}
void HumanB::attack() const
{
	if (w)
		std::cout << name << " attacks with their " << w->getType() << std::endl;
	else
		std::cout << name << " has no weapon!" << std::endl;
	
}

void HumanB::setWeapon(Weapon& weapon)
{
    w = &weapon;
}
