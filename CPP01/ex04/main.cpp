/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:33:12 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 10:53:10 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

int error(std::string message)
{
    std::cerr << message << std::endl;
    return (1);
}

int    replace(std::string s1, std::string s2, std::ifstream& in, std::ofstream& out)
{
    std::string line;
    int pos;
    size_t	aux;

    if (!getline(in, line, '\0'))
        return (error("Error while reading"));
    pos = 0;
    while (1)
    {
        aux = line.find(s1,0);
        if (aux == std::string::npos)
        {
            out << line;
            break;
        }
        out << line.substr(0, aux);
        out << s2; 
        line = line.substr(aux + s1.length(), line.length());
    }
    return (0);
}

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;

    if (argc != 4)
        return (error("Wrong number of arguments: ./replace filename s1 s2"));
    s1 = argv[2];
    s2 = argv[3];
	std::string	filename(argv[1]);
	if (filename == "" | s1 == "" || s2 == "")
        return (error("Empty string"));
	std::ifstream	ifs(argv[1]);
	if (!ifs)
        return (error("Error opening " + filename));
	filename = filename + ".replace";
    std::ofstream	ofs(filename);
	if (!ofs)
        return (error("Error creating "+ filename));
    if (replace(s1, s2, ifs, ofs))
        return (1);
    ifs.close();
    ofs.close();
    return (0);
}
