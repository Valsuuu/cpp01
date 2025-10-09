/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: val <val@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:36:57 by val               #+#    #+#             */
/*   Updated: 2025/10/08 11:54:53 by val              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include<unistd.h>

class Zombie
{
    public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    
    void announce(void);
    void processing(void);
    
    private:
    
    std::string name;
};

Zombie* newZombie(std::string name);


#endif