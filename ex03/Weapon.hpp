/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:56:35 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 11:15:41 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
#include <string>

class Weapon
{
	public :
	Weapon(std::string type);
	~Weapon();
	
	const std::string& getType() const;
	void setType(std::string newtype);
	
	private :
	std::string type;
	
};

#endif