/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:37:04 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 14:45:44 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << name << " created with his destructive " << weapon.getType() <<std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " destroyed" <<std::endl;
}

void HumanA::attack() const
{
	std::cout << name << "attacks with their " << weapon.getType() << std::endl;
	
}

