#include <iostream>

int main () {
	int n;
	std::cout << "Input: ";
	std::cin >> n;
	std::cout << "Output: \n";
	for (int i = 1; i <= 10; i++) {
		std::cout << n << " x " << i << " = " << n*i << std::endl;
	}
}