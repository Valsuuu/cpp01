/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:12:55 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/15 10:42:57 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_H
#define HARL_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
#include <string>
#include <fstream>

class Harl
{

	public:
	Harl();
	~Harl();
	void complain(std::string level);
	void displaying(void (Harl::*functions[])(void), std::string levels[], int i);
	
	private :
	void debug();
	void warning();
	void error();
	void info();
	
};

#endif