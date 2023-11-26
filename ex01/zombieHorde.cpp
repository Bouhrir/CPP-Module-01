/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:00:50 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/19 22:12:05 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	
	Zombie *res = new Zombie[N];

	for(int i = 0; i < N; i++){
		res[i].setName(name);
	}
	return res;
}
