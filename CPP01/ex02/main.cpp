/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:57:30 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/09 15:00:50 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The address in memory of the string by using: "<<std::endl;
    std::cout << "1. The string is: "<< &str << std::endl;
    std::cout << "2. The pointer is: "<< stringPTR << std::endl;
    std::cout << "3. The reference is: "<< &stringREF << std::endl;
    std::cout << "The string by using: "<<std::endl;
    std::cout << "1. The pointer is: "<< *stringPTR << std::endl;
    std::cout << "2. The reference is: "<< stringREF << std::endl;
}
