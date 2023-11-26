/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:15:07 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/25 15:19:48 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

void replace(Rep &R){
	std::ifstream input(R.getFile().c_str());
	if (!input.is_open()){
		std::cerr << "Unable to open input file." << endl;
		return ;
	}
	std::ofstream output((R.getFile() + ".replace").c_str());
	if (!output.is_open()){
		std::cerr << "Unable to create input file." << endl;
		input.close();
	}
	string line;
	while (std::getline(input, line)) {	
		size_t pos = 0;
        while (true)
		{
			pos = line.find(R.getS1(), pos);
            if (pos == string::npos)
				break ;
		    line.erase(pos, R.getS1().length());
            line.insert(pos, R.getS2());
			pos += R.getS2().length();
        }
		output << line << std::endl;
	}
	input.close();
	input.close();
}

int main(int ac, char **av){
	if (ac == 4){
		Rep tmp(av[1], av[2], av[3]);
		replace (tmp);
	}
	else
		std::cerr << "enter three param" << endl;
}
