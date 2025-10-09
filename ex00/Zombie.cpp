/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:36:52 by val               #+#    #+#             */
/*   Updated: 2025/10/08 19:04:27 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Unnamed Zombie created" << std::endl;
}

Zombie::Zombie(std::string name)
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