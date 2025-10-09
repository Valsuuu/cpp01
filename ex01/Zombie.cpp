/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:55:41 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/09 11:56:54 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie" << name << "created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie" << name << "destroyed" << std::endl;
}

void Zombie::announce()
{
  	processing();
    std::cout<< name << " : BraiiiiiiinnnzzzZ...";
    std::cout<< std::endl;
}