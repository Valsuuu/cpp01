/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:42:33 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/14 19:45:19 by vmartel          ###   ########.fr       */
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

	private:
	void debug();
	void info(void);
	void warning(void);
	void error(void);
}

#endif


