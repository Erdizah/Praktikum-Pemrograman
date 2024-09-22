soal1: P3S1.o helperSoal1.o
	g++ -o soal1 P3S1.o helperSoal1.o

P3S1.o: P3S1.cpp
	g++ -c P3S1.cpp

helperSoal1.o: helperSoal1.cpp
	g++ -c helperSoal1.cpp

run:
	./soal1

clean:
	del soal1.exe P3S1.o helperSoal1.o
