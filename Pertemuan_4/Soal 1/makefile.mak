sum: sum.o  
	g++ -o sum sum.o 

sum.o: sum.cpp
	g++ -c sum.cpp

run:
	./sum

clean:
	rm -f sum.exe sum.o
