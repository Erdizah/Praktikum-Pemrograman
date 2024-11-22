#include <iostream>
#include <string>

struct biodata {
	long long NISN;
	std::string nama;
	int nilai;
};

biodata siswa[10] = {
{9960312699, "Handi Ramadhan", 90},
{9963959682, "Rio Alfandra", 55},
{9950310962, "Ronaldo Valentino Uneputty", 80},
{9970272750, "Achmad Yaumil Fadjri R.", 60},
{9970293945, "Alivia Rahma Pramesti", 70},
{9952382180, "Ari Lutfianto", 65},
{9965653989, "Arief Budiman", 60}
};

/*
1. Urutkan data tersebut dengan urutan menaik berdasarkan:
 NISN
 Nilai
dengan menggunakan metode pengurutan penyisipan, seleksi, dan gelembung.
2. Carilah data yang memiliki NISN 9950310962, kemudian tampilkan nilainya
menggunakan pencarian bagi dua.

3. Ubah nama data yang memiliki nilai 60 menjadi Joko. Manfaatkan metode pencarian berun-
tun.
*/

void insert_NISN () {
    // Menampilkan pesan bahwa algoritma yang digunakan adalah Insertion Sort berdasarkan NISN
    std::cout << "Ini menggunakan Insertion Sort berdasarkan NISN \n";

    // Loop luar untuk iterasi dimulai dari indeks 1 hingga elemen terakhir
    for (int i = 1; i < 7; i++) {
        // Menyimpan nilai NISN, nama, dan nilai dari siswa[i] yang akan di-"insert"
        long long tempNISN = siswa[i].NISN; 
        std::string tempnama = siswa[i].nama;
        int tempnilai = siswa[i].nilai;
        
        // Inisialisasi j untuk mencocokkan posisi yang tepat bagi siswa[i]
        int j = i - 1;

        // Pindahkan elemen yang lebih besar dari `tempNISN` ke posisi berikutnya
        while (j >= 0 && siswa[j].NISN > tempNISN) {
            // Pindahkan elemen di posisi `j` ke posisi `j + 1`
            siswa[j + 1].NISN = siswa[j].NISN;
            siswa[j + 1].nama = siswa[j].nama;
            siswa[j + 1].nilai = siswa[j].nilai;
            j--; // Lanjutkan memeriksa elemen sebelumnya
        }
    
        // Setelah menemukan posisi yang tepat, tempatkan `tempNISN`, `tempnama`, dan `tempnilai`
        // pada posisi yang benar (j + 1)
        siswa[j + 1].NISN = tempNISN;
        siswa[j + 1].nama = tempnama;
        siswa[j + 1].nilai = tempnilai;
    }

    // Menampilkan array siswa yang telah diurutkan berdasarkan NISN
    for (int i = 0; i < 7; i++) {
        std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
    }
}


void select_NISN () {
    // Menampilkan pesan bahwa algoritma yang digunakan adalah Selection Sort berdasarkan NISN
    std::cout << "Ini menggunakan Selection Sort berdasarkan NISN \n";

    // Loop luar untuk iterasi melalui setiap elemen dalam array siswa
    for (int i = 0; i < 7; i++) {
        // Menetapkan indeks terkecil sebagai indeks i
        long long terkecil = i;

        // Menyimpan nilai NISN, nama, dan nilai dari siswa[i] untuk digunakan saat pertukaran
        long long tempNISN = siswa[i].NISN; 
        std::string tempnama = siswa[i].nama;
        int tempnilai = siswa[i].nilai;

        // Loop dalam untuk mencari elemen yang lebih kecil dari elemen pada indeks `i`
        for (int j = i + 1; j < 7; j++) {
            // Membandingkan NISN siswa[j] dengan NISN siswa[terkecil]
            if (siswa[j].NISN < siswa[terkecil].NISN) {
                // Jika NISN siswa[j] lebih kecil, maka perbarui indeks terkecil
                terkecil = j;
            }
        } 

        // Jika elemen terkecil ditemukan, lakukan pertukaran dengan elemen di indeks `i`
        if (siswa[terkecil].NISN < siswa[i].NISN) {
            // Tukar nilai NISN, nama, dan nilai antara siswa[i] dan siswa[terkecil]
            siswa[i].NISN = siswa[terkecil].NISN; 
            siswa[i].nama = siswa[terkecil].nama; 
            siswa[i].nilai = siswa[terkecil].nilai;
            
            // Tempatkan data siswa[i] ke posisi siswa[terkecil]
            siswa[terkecil].NISN = tempNISN; 
            siswa[terkecil].nama = tempnama; 
            siswa[terkecil].nilai = tempnilai;
        }
    }

    // Menampilkan array siswa yang telah diurutkan berdasarkan NISN
    for (int i = 0; i < 7; i++) {
        std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
    }
}


void bubble_NISN () {
    // Menampilkan pesan bahwa algoritma yang digunakan adalah Bubble Sort berdasarkan NISN
    std::cout << "Ini menggunakan Bubble Sort berdasarkan NISN \n";

    bool urut; // Variabel untuk mengecek apakah sudah terurut

    // Loop luar (iterasi sebanyak 7 kali, untuk jumlah elemen yang ada)
    for (int i = 0; i < 7; i++) {
        urut = true;  // Asumsikan array sudah terurut pada awalnya
        // Loop dalam untuk membandingkan elemen bersebelahan
        for (int j = 1; j < 7; j++) {
            // Jika NISN siswa[j] lebih kecil dari NISN siswa[j-1], lakukan pertukaran
            if (siswa[j].NISN < siswa[j-1].NISN) {
                // Menyimpan data sementara dari siswa[j] untuk pertukaran
                long long tempNISN = siswa[j].NISN; 
                std::string tempnama = siswa[j].nama; 
                int tempnilai = siswa[j].nilai;
                
                // Tukar data antara siswa[j] dan siswa[j-1]
                siswa[j].NISN = siswa[j-1].NISN; 
                siswa[j].nama = siswa[j-1].nama; 
                siswa[j].nilai = siswa[j-1].nilai;
                
                // Tempatkan data sementara di siswa[j-1]
                siswa[j-1].NISN = tempNISN; 
                siswa[j-1].nama = tempnama; 
                siswa[j-1].nilai = tempnilai;

                urut = false;  // Menandakan bahwa ada pertukaran, berarti array belum terurut
            }
        }

        // Jika tidak ada pertukaran yang dilakukan, berarti array sudah terurut, maka keluar dari loop
        if (urut) {
            break;
        }
    }

    // Menampilkan array siswa yang sudah terurut berdasarkan NISN
    for (int i = 0; i < 7; i++) {
        std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
    }
}


void insert_nilai () {
	std::cout << "Ini menggunakan Insertion Sort berdasarkan nilai \n";
	for (int i = 0; i < 7; i++) {
		long long tempNISN = siswa[i].NISN; 
		std::string tempnama = siswa[i].nama;
		int tempnilai = siswa[i].nilai;
		int j = i - 1;
	
	    // Pindahkan elemen yang lebih besar dari `key` ke posisi berikutnya
	    while (j >= 0 && siswa[j].nilai > tempnilai) {
	        siswa[j + 1].NISN = siswa[j].NISN;
	        siswa[j + 1].nama = siswa[j].nama;
	        siswa[j + 1].nilai = siswa[j].nilai;
	        j--;
	    }
	
	    // Tempatkan `key` pada posisi yang benar
	    siswa[j + 1].NISN = tempNISN;
	    siswa[j + 1].nama = tempnama;
	    siswa[j + 1].nilai = tempnilai;
	}
	for (int i = 0; i < 7; i++) {
		std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
	}
}

void select_nilai () {
    // Menampilkan pesan bahwa algoritma yang digunakan adalah Selection Sort berdasarkan nilai
    std::cout << "Ini mnenggunakan Selection Sort berdasarkan nilai \n";

    // Loop utama untuk iterasi sebanyak 7 kali (untuk setiap elemen dalam array siswa)
    for (int i = 0; i < 7; i++) {
        // Menyimpan indeks terkecil (terkecil = i)
        long long terkecil = i;
        
        // Menyimpan data sementara sebelum pertukaran
        long long tempNISN = siswa[i].NISN; 
        std::string tempnama = siswa[i].nama;
        int tempnilai = siswa[i].nilai;

        // Loop dalam untuk mencari nilai yang lebih kecil dari nilai pada posisi i
        for (int j = i + 1; j < 7; j++) {
            // Jika ditemukan nilai yang lebih kecil, perbarui nilai terkecil
            if (siswa[j].nilai < siswa[terkecil].nilai) {
                terkecil = j;
            }
        }

        // Jika ditemukan elemen dengan nilai yang lebih kecil, lakukan pertukaran
        if (siswa[terkecil].nilai < siswa[i].nilai) {
            // Tukar posisi antara siswa[i] dan siswa[terkecil]
            siswa[i].NISN = siswa[terkecil].NISN; 
            siswa[i].nama = siswa[terkecil].nama; 
            siswa[i].nilai = siswa[terkecil].nilai;

            siswa[terkecil].NISN = tempNISN; 
            siswa[terkecil].nama = tempnama; 
            siswa[terkecil].nilai = tempnilai;
        }                                                                               
    }

    // Setelah proses sorting selesai, tampilkan hasil array siswa yang sudah terurut berdasarkan nilai
    for (int i = 0; i < 7; i++) {
        std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
    }
}

void bubble_nilai () {
    // Menampilkan pesan bahwa algoritma yang digunakan adalah Bubble Sort berdasarkan nilai
    std::cout << "Ini mnenggunakan Bubble Sort berdasarkan nilai \n";

    // Inisialisasi variabel untuk memeriksa apakah array sudah terurut
    bool urut;
    
    // Loop utama untuk iterasi sebanyak 7 kali (untuk setiap elemen dalam array siswa)
    for (int i = 0; i < 7; i++) {
        urut = true;  // Anggap array sudah terurut, akan diset ke false jika ada pertukaran

        // Loop untuk membandingkan elemen-elemen yang berdekatan
        for (int j = 1; j < 7; j++) {
            // Jika nilai siswa[j] lebih kecil dari siswa[j-1], maka tukar posisi elemen-elemen tersebut
            if (siswa[j].nilai < siswa[j-1].nilai) {
                // Menyimpan data sementara sebelum pertukaran
                long long tempNISN = siswa[j].NISN; 
                std::string tempnama = siswa[j].nama; 
                int tempnilai = siswa[j].nilai;

                // Tukar posisi elemen siswa[j] dan siswa[j-1]
                siswa[j].NISN = siswa[j-1].NISN; 
                siswa[j].nama = siswa[j-1].nama; 
                siswa[j].nilai = siswa[j-1].nilai;

                siswa[j-1].NISN = tempNISN; 
                siswa[j-1].nama = tempnama; 
                siswa[j-1].nilai = tempnilai;

                // Jika terjadi pertukaran, set urut ke false untuk menunjukkan bahwa array belum terurut
                urut = false;
            }
        }
    }

    // Jika urut tetap true (tidak ada pertukaran), tampilkan hasil array siswa yang sudah terurut
    if (urut) {
        for (int i = 0; i < 7; i++) {
            std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
        }
    }
}

long long binary_search (long long lowerbound, long long upperbound, long long search) {
    // Menentukan posisi tengah dari rentang yang dicari
    long long middle = (lowerbound + upperbound) / 2;

    // Jika lowerbound lebih besar dari upperbound, berarti elemen tidak ditemukan
    if (lowerbound > upperbound) {
        return 0;  // Kembalikan 0 sebagai tanda bahwa pencarian tidak berhasil
    }

    // Jika nilai yang dicari ditemukan di posisi middle, kembalikan indeksnya
    if (search == siswa[middle].NISN) {
        return middle;
    }
    // Jika nilai yang dicari lebih kecil dari nilai di posisi middle, cari di sebelah kiri
    else if (search < siswa[middle].NISN) {
        return binary_search(lowerbound, middle - 1, search);  // Rekursif ke kiri
    }
    // Jika nilai yang dicari lebih besar dari nilai di posisi middle, cari di sebelah kanan
    else {
        return binary_search(middle + 1, upperbound, search);  // Rekursif ke kanan
    }
}


void sequential_search_task () {
	for (int i = 0; i < 7; i++) {
		if (siswa[i].nilai == 60) {
			siswa[i].nama = "Joko";
		}
	}
}

int main () {
	insert_nilai();
	std::cout << std::endl;
	insert_NISN();
	std::cout << std::endl;
	bubble_nilai();
	std::cout << std::endl;
	bubble_NISN();
	std::cout << std::endl;
	select_nilai();	
	std::cout << std::endl;
	select_NISN();
	std::cout << std::endl;
	std::cout << "Di bawah ini binary search NISN 9950310962: " << std::endl;
	int ditemukan = binary_search(0, 7, 9950310962);
	std::cout << siswa[ditemukan].NISN << " " << siswa[ditemukan].nama << " " << siswa[ditemukan].nilai;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Di bawah ini memanggil fungsi yang akan mengganti nama yang nilai 60 menjadi 'Joko'" << std::endl;
	sequential_search_task();
	for (int i = 0; i < 7; i++) {
		std::cout << siswa[i].NISN << " " << siswa[i].nama << " " << siswa[i].nilai << std::endl;
	}
}
 