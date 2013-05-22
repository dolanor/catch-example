#include <iostream>

#include <MaClasse.h>


namespace MonPackage {

MaClasse::MaClasse(std::string const& value)
: value_(value) {}

void MaClasse::print() const
{
	std::cout << "Value : " << value_ << std::endl;
}

std::string MaClasse::value() const
{
	return value_;
}

}
