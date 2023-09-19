#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
private:
	static const int fractionalPoint = 8;
	int number;
public:
	Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif //FIXED_HPP