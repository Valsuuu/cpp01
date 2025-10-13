/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:58:44 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/13 18:12:09 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool isFileReadable(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	return file.good();
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong numbers of args.." <<std::endl;
		return (1);
	}
	if (!isFileReadable(av[1]))
	
}