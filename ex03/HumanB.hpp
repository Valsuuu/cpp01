/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:26:52 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 16:28:49 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
#define HUMANB_CLASS_H

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
	public :
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	
	void setWeapon(Weapon& weapon);
	
	private :
	std::string name;
	Weapon* w;
};

#endif