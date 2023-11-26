/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:09:57 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 10:14:55 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){

	if (ac == 2){
		Harl supra;
		supra.complain(av[1]);
	}
	else
		cout << "too many arguments" << endl;
	
}