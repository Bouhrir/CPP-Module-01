/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:17:17 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/21 21:44:35 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	this->Name = "default";
}

Zombie::Zombie(string name){
	this->Name = name;
}

void Zombie::announce( void ){
	cout << this->Name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie(){
	 cout <<  this->Name << ": the Zombie should be destroyed" << endl;	
}
