#include <iostream>
#include <cmath>

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
	std::cin >> a >> b >> c;
	
	double nilai1, nilai2;
	
	int d = (pow(b, 2) -(4*a*c));
	if (d < 0) {
		std::cout << "No real roots (roots are complex)";
	} else if (d == 0) {
		std::cout << -b/(2*a);
	} else {
		nilai1 = (-b + sqrt(d))/(2*a);
		nilai2 = (-b - sqrt(d))/(2*a);
		
		std::cout << nilai1 << " " << nilai2;
	}
}
