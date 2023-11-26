/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:29:25 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 11:21:37 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanB{
	private:
		string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(string name);
		void attack();
		void setWeapon(Weapon &weapon);
		~HumanB();
};

#endif