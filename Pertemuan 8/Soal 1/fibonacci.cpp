#include <iostream>

int fibonacci (int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;	
	} else {
		return fibonacci(n-2) + fibonacci(n-1);
		
	}
}

int main () {
	std::cout << "Ketika n = 5, fibonacci(5) = "<< fibonacci(5) << std::endl;
	std::cout << "Ketika n = 8, fibonacci(8) = "<< fibonacci(8) << std::endl;
	std::cout << "Ketika n = 10, fibonacci(10) = "<< fibonacci(10) << std::endl;
	std::cout << "Ketika n = 20, fibonacci(20) = "<< fibonacci(20) << std::endl;
	std::cout << "Ketika n = 30, fibonacci(30) = "<< fibonacci(30) << std::endl;
}