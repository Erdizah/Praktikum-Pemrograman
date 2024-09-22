soal1: P2S1.o  
	g++ -o soal1 P2S1.o 

P2S1.o: P2S1.cpp
	g++ -c P2S1.cpp

run:
	./soal1

clean:
	del soal1.exe P2S1.o