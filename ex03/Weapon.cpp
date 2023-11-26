/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:28:23 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 10:29:56 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(string name){
	type = name;
}

const string &Weapon::getType(){
	return type;
}

Weapon::Weapon(){
	type = "default";
}

Weapon::Weapon(string name){
	type = name;
}

Weapon::~Weapon(){

}

