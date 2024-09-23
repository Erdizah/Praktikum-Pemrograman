P3S2: P3S2.o  
	g++ -o P3S2 P3S2.o 

P3S2.o: P3S2.cpp
	g++ -c P3S2.cpp

run:
	./P3S2

clean:
	rm -f P3S2.exe P3S2.o
