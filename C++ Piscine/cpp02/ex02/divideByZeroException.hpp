#ifndef DIVIDEBYZEROEXCEPTION_HPP
# define DIVIDEBYZEROEXCEPTION_HPP

# include <exception>

class divideByZeroException : public std::exception {
public:
	divideByZeroException();
	divideByZeroException(const divideByZeroException&);
	virtual const char* what() const throw();
	virtual ~divideByZeroException() throw();
};

#endif // DIVIDEBYZEROEXCEPTION_HPP