#include "AMateria.h"

AMateria::AMateria(const std::string& type) {

}

AMateria::AMateria(const AMateria& copy) {
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& copy) {
	this->type = copy.type;
	return *this;
}

AMateria::~AMateria() {

}

const std::string& AMateria::getType() const {

}

void AMateria::use(ICharacter& target) {

}
