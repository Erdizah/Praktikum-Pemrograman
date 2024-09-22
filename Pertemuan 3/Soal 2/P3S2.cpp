#include <iostream>

int main () {
	int n, max = -32768;
	
	for (int i = 1; i <= 3; i++) {
		std::cout << "inputkan bilangan " << i << ": ";
		std::cin >> n;
		
		if (n >= max) {
			max = n;
		}
	}
	
	std::cout << "bilangan terbesar adalah: "<< max;
}
