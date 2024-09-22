#include <iostream>
#include <cmath>
#include "helperSoal1.h"

/*
Test Case:
1 2 3 result = no real roots

4 -4 1 result = 0.5

54 -9 -18 result = 0.666667 -0.5

63 4 -35 result = 0.714286 -0.777778
*/

int main () {
	double a, b, c;
	std::cout << "Given ax^2 + bx + c = 0 formula. \nInput a, b, and c coefficient value: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	
	RataRata(a, b, c);
}
