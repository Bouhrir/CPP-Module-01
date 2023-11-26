/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:17:46 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/20 20:35:28 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
