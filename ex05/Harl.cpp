/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:46:35 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/14 20:01:35 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;	
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;	
}


void Harl::complain(std::string level)
{
	void (Harl::*functions[])(void) = 
}