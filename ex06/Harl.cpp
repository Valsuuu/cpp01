/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:14:26 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/15 11:26:57 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout <<"Harl created" << std::endl;	
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;	
}
void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I debug myself" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is an big big news, a huge info..." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I have a bad feelings, i might eat be warned" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "There is a mistake..." << std::endl;
}
void Harl::displaying(void (Harl::*functions[])(void), std::string levels[], int i)
{
	for (;i < 4; i++)
	{
		std::cout <<  levels[i]  << std::endl;
		(this->*functions[i])();
		std::cout <<std::endl;
	}
}


void Harl::complain(std::string level)
{
    int lvl = -1;

    if (level == "DEBUG") lvl = 0;
    else if (level == "INFO") lvl = 1;
    else if (level == "WARNING") lvl = 2;
    else if (level == "ERROR") lvl = 3;

    switch (lvl)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
