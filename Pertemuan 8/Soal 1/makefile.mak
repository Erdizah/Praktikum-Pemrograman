fibonacci: fibonacci.o  
	g++ -o fibonacci fibonacci.o 

fibonacci.o: fibonacci.cpp
	g++ -c fibonacci.cpp

test:
	./fibonacci.exe

clean:
	del fibonacci.exe fibonacci.o fibonacci.o