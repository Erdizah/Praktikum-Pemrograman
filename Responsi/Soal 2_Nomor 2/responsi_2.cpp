#include <iostream>
#include <string>
using namespace std;

string balikstring(string s) {
	//Assign string terbalik sebagai agar memiliki panjang string yang sama dengan string awal
	string terbalik = s;
	
	//Inisialiasi panjang string dengan s.length()
	int panjangstring = s.length();
	
	for (int i = 0; i < panjangstring; i++) {
		//Untuk setiap elemen dalam string terbalik dari depan akan diganti dengan elemen string s dari belakang
		terbalik[i] = s[panjangstring - i - 1];
	}
	
	//Kembalian string terbalik 
	return terbalik;
}

int main () {
	cout << "Test case 1:" << endl;
	cout << "Input: = SIGMA EPSILON" << endl;
	string s1 = "SIGMA EPSILON";
	cout << "String terbalik dari " << s1 << " adalah: " << balikstring(s1) << endl << endl;
	
	cout << "Test case 2:" << endl;
	cout << "Input: = KASUR RUSAK " << endl;
	string s2 = "KASUR RUSAK";
	cout << "String terbalik dari " << s2 << " adalah: " << balikstring(s2) << endl << endl;
	
	cout << "Test case 3:" << endl;
	cout << "Input: = ERDIZAH GHODI " << endl;
	string s3 = "ERDIZAH GHODI";
	cout << "String terbalik dari " << s3 << " adalah: " << balikstring(s3) << endl << endl;
	
	cout << "Test case 4:" << endl;
	cout << "Input: = DEPARTEMEN ILMU KOMPUTER DAN ELEKTRONIKA " << endl;
	string s4 = "DEPARTEMEN ILMU KOMPUTER DAN ELEKTRONIKA";
	cout << "String terbalik dari " << s4 << " adalah: " << balikstring(s4) << endl << endl;
	
	cout << "Test case 5:" << endl;
	cout << "Input: = " << endl;
	string s5 = "";
	cout << "String terbalik dari " << s5 << " adalah: " << balikstring(s5) << endl << endl;
	
	return 0;
}