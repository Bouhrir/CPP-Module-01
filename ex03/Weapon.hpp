/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:28:33 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 11:24:34 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP 

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon{
	private:
		string type;
	public:
		Weapon();
		Weapon(string name);
		void setType(string name);
		const string &getType();
		~Weapon();
};



#endif