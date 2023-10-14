#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed {
private:
	static const bool outputDebugMessages = false;
	static const int fractionalPoint = 8;
	int number;
public:
	Fixed();
	Fixed(const int bits);
	Fixed(const float num);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	bool operator<(const Fixed& cmp) const;
	bool operator>(const Fixed& cmp) const;
	bool operator<=(const Fixed& cmp) const;
	bool operator>=(const Fixed& cmp) const;
	bool operator==(const Fixed& cmp) const;
	bool operator!=(const Fixed& cmp) const;
	Fixed operator+(const Fixed& add) const;
	Fixed operator-(const Fixed& add) const;
	Fixed operator*(const Fixed& add) const;
	Fixed operator/(const Fixed& add) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<< (std::ostream &out, const Fixed& num);

#endif //FIXED_HPP
