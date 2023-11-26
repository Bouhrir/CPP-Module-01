/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:29:14 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 12:40:11 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	this->weapon = NULL;
	this->name = "default";
}

HumanB::~HumanB(){
	
}

HumanB::HumanB(string name){
	this->name = name;
	this->weapon = NULL;
}

void HumanB::attack(){
	if (this->weapon)
		cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}
void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}
