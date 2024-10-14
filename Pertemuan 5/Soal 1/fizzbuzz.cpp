#include <iostream>
#include <vector>

//Fizzbuff problem
int main () {
	std::vector<std::string> hasil;
	
	for (int i = 1; i <= 100; i++) {
		if (i % 15 == 0) {
			hasil.push_back("FizzBuzz");
		} else if (i % 3 == 0) {
			hasil.push_back("Fizz");
		} else if (i % 5 == 0) {
			hasil.push_back("Buzz");
		} else {
			hasil.push_back(std::to_string(i));
		}
	}
	
	for (int i = 0; i <= 100; i++) {
		std::cout << hasil[i] << std::endl;
	}
}