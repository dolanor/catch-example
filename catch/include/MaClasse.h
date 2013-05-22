#include <string>

namespace MonPackage {

class MaClasse
{
public:
	MaClasse(std::string const& value);
	void print() const;
	std::string value() const;
private:
	std::string value_;
};

}
