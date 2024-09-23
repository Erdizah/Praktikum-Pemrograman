P2S2: P2S2.o  
	g++ -o P2S2 P2S2.o 

P2S2.o: P2S2.cpp
	g++ -c P2S2.cpp

run:
	./P2S2

clean:
	rm -f P2S2.exe P2S2.o
