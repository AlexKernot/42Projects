#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	static const int fractionalPoint = 8;
	int number;
public:
	Fixed();
	Fixed(const int bits);
	Fixed(const float num);
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

#endif //FIXED_HPP
