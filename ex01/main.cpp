/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:01:11 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/20 19:03:06 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zmb;
	zmb = zombieHorde(NZ, "miroka");
	for(int i = 0; i < NZ; i++){
		zmb[i].announce();
	}
	delete [] zmb;
}