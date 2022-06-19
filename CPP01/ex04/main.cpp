/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:33:12 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 10:08:31 by mbueno-g         ###   ########.fr       */
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
    int aux;

    if (!getline(in, line, '\0'))
        return (error("Error while reading"));
    pos = 0;
    while (1)
    {
        aux = line.find(s1,pos);
        if (aux == -1)
        {
            out << line;
            break;
        }
        out << line.substr(0, aux);
        out << s2; 
        line = line.substr(aux + s1.length(), line.length());
        pos = aux;
    }
    return (0);
}

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string filename;
    std::ifstream in;
    std::ofstream out;

    if (argc != 4)
        return (error("Wrong number of arguments: ./replace filename s1 s2"));
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1 == "" || s2 == "")
        return (error("Empty string"));
    in.open(filename.c_str(), std::ios::in);// converts a string into a char *
    if (!in)
        return (error("Error opening " + filename));
    out.open((filename + ".replace").c_str(), std::ios::out);
    if (!out)
        return (error("Error creating "+ filename + ".replace"));
    if (replace(s1, s2, in, out))
        return (1);
    in.close();
    out.close();
    return (0);
}
