/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:41:08 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/21 16:45:12 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REP_HPP
#define REP_HPP

#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::endl;
using std::cout;

class Rep{
	private:
		string file;
		string s1;
		string s2;
	public:
		Rep();
		Rep(const string &file, const string &s1, const string &s2);
		string getFile();
		string getS1();
		string getS2();
		~Rep();
};


#endif