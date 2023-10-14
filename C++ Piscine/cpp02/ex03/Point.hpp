#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	Point(const float, const float);
	Point(const Point&);
	Point& operator=(const Point&);
	bool operator==(const Point&) const;
	~Point();
	Fixed getX() const;
	Fixed getY() const;
}; 

#endif // POINT_HPP
