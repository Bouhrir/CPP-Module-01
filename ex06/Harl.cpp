/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:15:45 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/21 18:40:54 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
void Harl::debug(void){
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << endl;
}

void Harl::info(void){
	cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void){
	cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void){
	cout << "This is unacceptable!, I want to speak to the manager now." << endl;
}
//////////////////////////////////
void Harl::complain(std::string level){
	
	string arr[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4){
		if (arr[i] == level)
			break;
		i++;
	}
	void (Harl::*env[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch(i){
		case 0:
			cout << "[ DEBUG ]" << endl;
			(this->*(env[0]))();
		case 1:
			cout << "[ INFO ]" << endl;
			(this->*(env[1]))();
		case 2:
			cout << "[ WARNING ]" << endl;
			(this->*(env[2]))();
		case 3:
			cout << "[ ERROR ]" << endl;
			(this->*(env[3]))();
			break ;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
}
Harl::~Harl(){}