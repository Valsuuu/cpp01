/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:55:35 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/09 12:32:15 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void processing()
{
    std::cout<<"Processing, please wait\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"."<<std::flush;
        usleep(100000);
    }
    std::cout<<std::endl;
    
}
int compatibility(const std::string &input, int &n)
{
    std::stringstream ss(input);
    if (!(ss >> n))
    {
        std::cerr << "Invalid Number! Enter digits only" << std::endl;
        return 1;
    }
    if (n <= 0)
    {
        std::cerr << "Number must be positive!" << std::endl;
        return 1;
    }
    processing();
    return 0;
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
	
	int n;
	std::string input;
	std::cout << "How many zombie's in the Hord ?"<< std::endl;
	std::getline(std::cin, input);
	if (compatibility(input, n))
		return (1);
	std::cout << "You want " << n <<" zombies in the hord"<<std::endl;
}
