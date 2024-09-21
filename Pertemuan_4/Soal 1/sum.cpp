#include <iostream>

int main () {
	int n, sum = 0;
	std::cout << "Input: ";
	std::cin >> n;
	
	sum = (n * (n+1))/2;
	std::cout << "Output: Sum = " << sum << std::endl;
	std::cout << "(Explanation: ";
	
	for (int i = 1; i <= n; i++) {
		std::cout << i;
		(i != n) ? std::cout << " + " : std::cout << " ";
	}
	
	std::cout << "= " << sum << ")";
}