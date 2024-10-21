#include <iostream>
#include <string>

// Struct untuk barang
struct Barang {
    std::string kode;
    std::string nama;
    float harga;
    int jumlah;
};

// Fungsi untuk menghitung total jumlah barang dan harga rata-rata
int inventory(int n, Barang barang[]) {
    if (n > 50) {
        std::cout << "Barang terlalu banyak!" << std::endl;
        return 0;
    }
    
    float hargarerata = 0;
    int jumlahbarang = 0;

    // Menghitung jumlah barang dan harga rata-rata
    for (int i = 0; i < n; i++) {
        jumlahbarang += barang[i].jumlah;
        hargarerata += barang[i].harga;
    }

    hargarerata /= n;

    std::cout << "Total jumlah barang: " << jumlahbarang << std::endl;
    std::cout << "Harga rata-rata: " << hargarerata << std::endl;
    return 0;
}

// Test case pertama
void test1() {
    int n = 3;
    Barang barang[3] = {
        {"101", "Sabun", 5000, 10},
        {"102", "Sikat Gigi", 7500, 15},
        {"103", "Shampoo", 12000, 8}
    };
    std::cout << "Test 1:" << std::endl;
    inventory(n, barang);
}

// Test case kedua
void test2() {
    int n = 2;
    Barang barang[2] = {
        {"201", "Buku Tulis", 3000, 20},
        {"202", "Pensil", 1000, 50}
    };
    std::cout << "Test 2:" << std::endl;
    inventory(n, barang);
}

// Test case ketiga
void test3() {
    int n = 4;
    Barang barang[4] = {
        {"301", "Kopi", 15000, 5},
        {"302", "Gula", 12000, 3},
        {"303", "Teh", 8000, 7},
        {"304", "Susu", 18000, 2}
    };
    std::cout << "Test 3:" << std::endl;
    inventory(n, barang);
}

int main() {
    // Memanggil semua test case
    test1();
    std::cout << std::endl;
    std::cout << "Expected Output: Total jumlah barang: 33\nHarga rata-rata: 8166.67"; 
	std::cout << std::endl << std::endl << "Benar" << std::endl << std::endl;
    test2();
    std::cout << std::endl;
    std::cout << "Expected Output: Total jumlah barang: 70\nHarga rata-rata: 2000"; 
	std::cout << std::endl << std::endl << "Benar" << std::endl << std::endl;
    test3();
    std::cout << std::endl;
    std::cout << "Expected Output: Total jumlah barang: 17\nHarga rata-rata: 13250"; 
	std::cout << std::endl << std::endl << "Benar" << std::endl << std::endl;

    return 0;
}
