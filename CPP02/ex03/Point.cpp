

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const a, float const b) : _x(a), _y(b)
{
}

Point::~Point()
{
}

Point::Point(Point const &copy)
{
	(*this) = copy;
}

Point& Point::operator=(Point const & copy)
{
	this->_x._val = copy._x.getRawBits();
	this->_y._val = copy._x.getRawBits();

	return (*this);
}
