#include "bsp.hpp"

#include "Point.hpp"
#include "Fixed.hpp"

Fixed abs(const Fixed& num) {
	if (num < 0)
		return Fixed(-(num.toFloat()));
	return num;
}

Fixed calculateArea(const Point a, const Point b, const Point c) {
	const Fixed aX = a.getX();
	const Fixed aY = a.getY();
	const Fixed bX = b.getX();
	const Fixed bY = b.getY();
	const Fixed cX = c.getX();
	const Fixed cY = c.getY();

	const Fixed crossProduct(aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)); 
	Fixed area = abs(crossProduct) / 2;
	return Fixed(area);
}

bool checkPoints(const Point a, const Point b, const Point c, const Point point) {
	if (point == a || point == b || point == c)
		return false;
	if (a.getX() == b.getX() && point.getX() == a.getX())
		return false;
	if (a.getX() == c.getX() && point.getX() == a.getX())
		return false;
	if (b.getX() == c.getX() && point.getX() == b.getX())
		return false;
	if (a.getY() == b.getY() && point.getY() == a.getY())
		return false;
	if (a.getY() == c.getY() && point.getY() == a.getY())
		return false;
	if (b.getY() == c.getY() && point.getY() == b.getY())
		return false;
	return true;
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	if (checkPoints(a, b, c, point) == false)
		return false;
	const Fixed areaABC = calculateArea(a, b, c);

	const Fixed areaPAB = calculateArea(point, a, b);
	const Fixed areaPAC = calculateArea(point, a, c);
	const Fixed areaPBC = calculateArea(point, b, c);

	const Fixed areaP = areaPAB + areaPAC + areaPBC;
	if (areaP == areaABC)
		return true;
	return false;
}
