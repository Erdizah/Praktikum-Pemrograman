#include <iostream>
#include <cmath>
#include "helperSoal1.h"

void RataRata(double a, double b, double c) {
    double nilai1, nilai2;
	
	double d = (pow(b, 2) -(4*a*c));
	if (d < 0) {
		std::cout << "No real roots (roots are complex)";
	} else if (d == 0) {
		std::cout << "Root = "<< -b/(2*a);
	} else {
		nilai1 = (-b + sqrt(d))/(2*a);
		nilai2 = (-b - sqrt(d))/(2*a);
		
		std::cout << "Root 1 = " << nilai1 << " and root 2 = " << nilai2;
	}
}