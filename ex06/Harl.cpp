/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:14:26 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/15 10:50:17 by vmartel          ###   ########.fr       */
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
	void (Harl::*functions[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };


	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			displaying(functions, levels, i);
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}
