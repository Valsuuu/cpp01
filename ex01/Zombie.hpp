/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:55:43 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/09 13:12:07 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORD_CLASS_H
#define HORD_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
#include <string>

class Zombie
{
	public :
	
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);
	void setName(std::string name);
	
	private :
	
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);
void processing();


#endif