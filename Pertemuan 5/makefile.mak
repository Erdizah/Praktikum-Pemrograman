test1: test.o  
	g++ -o test1 test.o 

test.o: test.cpp
	g++ -c test.cpp

test:
	./test1.exe

clean:
	rm -f test1.exe test1.o test.o
