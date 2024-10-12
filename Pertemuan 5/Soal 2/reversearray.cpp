#include <iostream>
#include <vector>
#include <string>

int main () {
	std::vector<std::string> nilai;
	int i = 0;
	std::string in;
	
	std::cout << "Input: [";
	while (true) {
		std::cin >> in;
		if (in == "]") {
			break;
		}
		i++;
		nilai.push_back(in);
	}
	std::vector <std::string> nilaiterbalik;
	
	for (int j = i - 1; j >= 0; j--) {
		nilaiterbalik.push_back(nilai[j]);
	}
	
	std::cout << "[";
	for (int j = 0; j < i; j++) {
		if (j != i - 1) {
			std::cout << nilaiterbalik[j] << ", ";
		} else {
			std::cout << nilaiterbalik[j];
		}
	}
	std::cout << "]";
}