/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:15:29 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/20 15:12:48 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(){
	string str = "HI THIS IS BRAIN";

	string *stringPTR = &str;
	
	string &stringREF = str;
	
	// address of the str
	cout << &str << endl;
	// address of the *str
	cout <<	stringPTR << endl;
	// address of the &str
	cout << &stringREF << endl;
	
	cout << "****************" << endl;
	
	//value
	cout << str << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
	
}