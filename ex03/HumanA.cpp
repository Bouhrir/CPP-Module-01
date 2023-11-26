/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:29:41 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 12:36:36 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"



HumanA::HumanA(string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}
void HumanA::attack(){
	cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}

HumanA::~HumanA(){
	
}