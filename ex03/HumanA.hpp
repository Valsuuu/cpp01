/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:09:58 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 15:07:32 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
#define HUMANA_CLASS_H

#include "Weapon.hpp"

class HumanA
{
	public :
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;
	

	private :
	
	std::string name;
	Weapon& weapon;
	
};



#endif