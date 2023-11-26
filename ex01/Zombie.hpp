/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:01:32 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/23 13:12:14 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#define NZ 5

using std::string;
using std::cout;
using std::endl;

class Zombie{
	private:
		string Name;
	public:
		Zombie();
		Zombie(string name);
		void announce( void );
		void setName(string name);
		~Zombie();		
};
Zombie* zombieHorde( int N, std::string name );
#endif