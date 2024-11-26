#include <iostream>
using namespace std;

int terbesar(int arr[], int n) {
	//Untuk antisipasi jika daftar tidak berisi
	if (n == 0) {
		return 0;
	}
	
	//Assign nilai maks dengan bilangan pertama untuk mengisi nilai maks pertama
	int maks = arr[0];
	
	for (int i = 1; i < n; i++) {
		//Jika ada bilangan di dalam daftar yang lebih dari maks, ganti nilai maks dengan bilangan tersebut
		if (arr[i] > maks) {
			maks = arr[i];
		}
	}
	
	//Kembalian nilai maks dari seluruh bilangan dalam daftar
	return maks;
}

int main () {
	cout << "Test case 1:" << endl;
	cout << "Input: = 5 " << endl << "1 2 4 3 5" << endl;
	int arr1[5] = {1, 2, 4, 3, 5};
	cout << "Nilai terbesar pada test case 1 adalah: " << terbesar(arr1, 5) << endl << endl;
	
	cout << "Test case 2:" << endl;
	cout << "Input: = 7 " << endl << "17 8 45 20 24 64 81" << endl;
	int arr2[7] = {17, 8, 45, 20, 24, 64, 81};
	cout << "Nilai terbesar pada test case 2 adalah: " << terbesar(arr2, 7) << endl << endl;
	
	cout << "Test case 3:" << endl;
	cout << "Input: = 10 " << endl << "91 100 89 87 95 97 90 88 85 89" << endl;
	int arr3[10] = {91, 100, 89, 87, 95, 97, 90, 88, 85, 89};
	cout << "Nilai terbesar pada test case 3 adalah: " << terbesar(arr3, 10) << endl << endl;
	
	cout << "Test case 4:" << endl;
	cout << "Input: = 1 " << endl << "91" << endl;
	int arr4[1] = {91};
	cout << "Nilai terbesar pada test case 4 adalah: " << terbesar(arr4, 1) << endl << endl;
	
	cout << "Test case 5:" << endl;
	cout << "Input: = 0" << endl;
	int arr5[0];
	cout << "Nilai terbesar pada test case 5 adalah: " << terbesar(arr5, 0) << endl << endl;
	return 0;
}