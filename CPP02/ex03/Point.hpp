

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
        Point(Point const & copy);
		Point(float const a, float const b);
		~Point(void);
		Point& operator=(Point const & copy);

	private:
		Fixed const _x;
		Fixed const _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
