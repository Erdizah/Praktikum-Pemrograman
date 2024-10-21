test1: struct.o  
	g++ -o test1 struct.o 

struct.o: struct.cpp
	g++ -c struct.cpp

test:
	./test1.exe

clean:
	del test1.exe struct.o struct.o