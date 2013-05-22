#include <catch.hpp>

#include <MaClasse.h>

TEST_CASE("unit/MonPackage/MaClasse/value",
          "The value should be the same")

{
	std::string input("foobar");
	MonPackage::MaClasse mc(input);
	CHECK(mc.value() == input);
}
