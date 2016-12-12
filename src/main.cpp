#include <iostream>
#include "square.h"

int main() {
	std::cout << "A square has " << getSquareSides() << " sides" << std::endl;
	std::cout << "A square with sides that are 5 long has a permiter of " << getSquarePerimeter(5) << std::endl;

	return 0;
}
