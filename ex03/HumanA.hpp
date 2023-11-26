/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:30:00 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 12:36:01 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;


class HumanA {
	private:
		string name;
		Weapon& weapon;
	public:
		HumanA(string name, Weapon& weapon);
		void attack();
		~HumanA();
};

#endif