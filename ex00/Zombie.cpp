/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:36:52 by val               #+#    #+#             */
/*   Updated: 2025/10/09 10:32:31 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << name << "Zombie created" << std::endl;
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

void Zombie::processing()
{
    std::cout<<"Processing, please wait\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"."<<std::flush;
        usleep(100000);
    }
    std::cout<<std::endl;
    
}

void Zombie::announce()
{
    Zombie::processing();
    std::cout<< name << " : BraiiiiiiinnnzzzZ...";
    std::cout<< std::endl;
}