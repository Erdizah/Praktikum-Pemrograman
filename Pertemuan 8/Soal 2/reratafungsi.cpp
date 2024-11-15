#include <iostream>

double total(int n, int arr[]) {
	if (n == 0) {
		return 0;
	} else {
		return arr[n-1] + total(n-1, arr);
	}
}

double rerata(int n, int arr[]) {
	double ratarata = total(n, arr) / n;
	return ratarata;
}

int main () {
	int n = 5;
	int arr[5] = {1, 2, 3, 4, 5};
	std::cout << "Ketika n = 5, arr[5] = {1, 2, 3, 4, 5}, rata - rata = " << rerata(5, arr) << std::endl;
	int arr2[5] = {3, 3, 4, 5, 2};
	std::cout << "Ketika n = 5, arr[5] = {3, 3, 4, 5, 2}, rata - rata = " << rerata(5, arr2) << std::endl;
	n = 6;
	int arr3[6] = {1, 2, 3, 4, 3, 1};
	std::cout << "Ketika n = 6, arr[6] = {1, 2, 3, 4, 3, 1}, rata - rata = " << rerata(6, arr3) << std::endl;
}