/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:43:34 by val               #+#    #+#             */
/*   Updated: 2025/10/08 18:57:34 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void exiting()
{
    std::cout << "Exiting...";
    std::cout << std::endl;
    exit(1);
}

int entry()
{
    std::string entry;
    std::cout << "Mutltiple entry possible :\n";
        std::cout << "exit | announce | newzombie\n";
        std::cout << "      Please choose one...";
        std::cout << std::endl;   
    std::getline(std::cin, entry);
    if (entry == "exit")
        exiting();
    else if (entry == "announce")
        return (1);
    else if (entry == "newzombie")
        return (2);
    else 
        return (0);
    return (0);
}

int main()
{
    std::cout<<"Programme 'zombie' in activation, please wait...\n";
   for (int i = 0; i < 10; i++)
    {
        std::cout << "." << std::flush; 
        usleep(100000);
    }
    std::cout<<"\n";
    Zombie z;
    Zombie *newz;
    std::string name;
    int input;
    while (1)
    {
        input = entry();
        if (input == 1)      
            z.announce();
        else if (input == 2)
        {
            newz = newZombie(name);
           (void)newz;
        }
    }
    return (0);
}   