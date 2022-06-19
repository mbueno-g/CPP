
#include "Point.hpp"

float	area(Point const r, Point const s, Point const t)
{
	float area = (r._x*(s._y - t._y) + s._x*(t._y - r._y) + t._x * (r._y - s._y)) / 2.0; 

	if (area < 0)
		return -area;
	return area;
}

/*               B
                / \
               /   \		ABP + ACP + BCP = ABC
              /     \
             /   P   \
            /         \
          A ----------- C
 */

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float abc = area(a,b,c);
	float abp = area(a,b,point);
	float acp = area(a,c,point);
	float bcp = area(b,c,point);

	return abc == abp + acp + bcp;
}
