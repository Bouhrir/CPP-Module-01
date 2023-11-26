/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:17:07 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 11:01:59 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie zmb1;
	zmb1.announce();
	
	Zombie *zmb2;
	zmb2 = newZombie("miroka");
	zmb2->announce();

	randomChump("skrt7");	
	delete zmb2;
	
}