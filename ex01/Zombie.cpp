/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:02:08 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/21 21:31:07 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	Name = "default";
}

Zombie::Zombie(string name){
	Name = name;
}

void Zombie::announce(){
	cout << Name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name){
	this->Name = name;
}

Zombie::~Zombie(){
	 cout <<  Name << ": the Zombie should be destroyed" << endl;	
}