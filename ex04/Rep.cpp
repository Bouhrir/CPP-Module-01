/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:40:51 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/21 16:46:40 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

Rep::Rep(){
		
}

Rep::Rep(const string &file, const string &s1, const string &s2)
{
	if (s1.empty() || s2.empty()){
		std::cerr << "empty" << endl;
		exit(0);
	}
	this->file = file;
	this->s1 = s1;
	this->s2 = s2;
}

string Rep::getFile(){
	return this->file;
}

string Rep::getS1(){
	return this->s1;
}

string Rep::getS2(){
	return this->s2;
}

Rep::~Rep(){
	
}