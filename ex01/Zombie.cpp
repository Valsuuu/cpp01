/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:55:41 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/09 13:13:24 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " created";
    std::cout << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed" << std::endl;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
    std::cout<< name << " : BraiiiiiiinnnzzzZ...";
    std::cout<< std::endl;
}