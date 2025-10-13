/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:03:06 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 14:16:35 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout<< "Weapon " << type << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout<< "Weapon " << type << " destroyed" << std::endl;
}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newtype)
{
	type = newtype;
}