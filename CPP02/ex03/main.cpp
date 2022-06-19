/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:30:28 by mbueno-g          #+#    #+#             */
/*   Updated: 2022/06/19 15:33:12 by mbueno-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) 
{ 
	Point a(0,0);
	Point b(10,10);
	Point c(12,2);
	Point point1(8,4);
	Point point2(16,6);

	std::cout << bsp(a,b,c,point1) << std::endl;
	std::cout << bsp(a,b,c,point2) << std::endl;

	return 0; 
}

