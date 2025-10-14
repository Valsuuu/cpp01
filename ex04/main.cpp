/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmartel <vmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:58:44 by vmartel           #+#    #+#             */
/*   Updated: 2025/10/14 19:27:36 by vmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void printError(std::string msg)
{
	std::cerr << msg << std::endl;
	exit(1);
}

bool isFileReadable(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	return file.good();
}

std::string replaceAll(std::string content, const std::string& s1, const std::string& s2)
{
	size_t pos = 0;

	while((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	return content;
}

int main(int ac, char **av)
{
	if (ac != 4)
		printError("Wrong numbers of args..");
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (!isFileReadable(av[1]))
		printError("Files not readable...");
		
	std::ifstream input(filename.c_str());
	if (!input.is_open())
		printError("Error opening file...");
	std::string content;
	std::string line;
	
	while (std::getline(input, line))
	{
		content += line;
		if (!input.eof())
			content += "\n";
	}
	input.close();
	std::string replaced;

	replaced = replaceAll(content, s1, s2);
	std::ofstream output((filename + ".replace").c_str());
	if (!output.is_open())
		printError("Error creating output file.");
	output << replaced;
	output.close();
	return (0);
	
}