/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:43:34 by val               #+#    #+#             */
/*   Updated: 2025/10/09 10:53:28 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void exiting()
{
    std::cout << "Exiting...";
    std::cout << std::endl;
    exit(1);
}


int main()
{
    std::cout<<"Program 'zombie' in activation, please wait...\n";
   for (int i = 0; i < 10; i++)
    {
        std::cout << "." << std::flush; 
        usleep(100000);
    }
    std::cout<<"\n";
	std::string name;
	std::cout << "Heap Zombie name's please\n" << std::endl;
	std::getline(std::cin, name);
    Zombie *newz = newZombie(name);
	newz->announce();
	delete newz;
	std::cout << "Stack zombies's name please\n"<< std::endl;
	std::getline(std::cin, name);
	randomChump(name);
    return (0);
}   