#include "Point.hpp"

Point::Point() : x(0), y(0) {  }

Point::Point(const float _x, const float _y) : x(_x), y(_y) {  }

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {  }

Point& Point::operator=(const Point& copy) {
	// This function cannot do anything.
	// This class is unassignable because of the const attributes.
	(void)copy;
	return *this;
}

bool Point::operator==(const Point& cmp) const {
	if (this->getX() == cmp.getX()
		&& this->getY() == cmp.getY())
		return true;
	return false;
}

// This does nothing.
Point::~Point() {}

Fixed Point::getX() const{
	return x;
}

Fixed Point::getY() const{
	return y;
}
