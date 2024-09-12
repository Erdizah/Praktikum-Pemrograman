soal1: Soal_1.o helperSoal1.o
	g++ -o soal1 Soal_1.o helperSoal1.o

Soal_1.o: Soal_1.cpp
	g++ -c Soal_1.cpp

helperSoal1.o: helperSoal1.cpp
	g++ -c helperSoal1.cpp

soal2: Soal_2.o 
	g++ -o soal2 Soal_2.o 

Soal_2.o: Soal_2.cpp
	g++ -c Soal_2.cpp

clean:
	rm -f soal1 Soal_1.o helperSoal1.o
	rm -f soal2 Soal_2.o helperSoal2.o