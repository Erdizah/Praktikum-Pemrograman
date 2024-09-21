sum: sum.o  
	g++ -o sum sum.o 

sum.o: sum.cpp
	g++ -c sum.cpp

run:
	./sum

clean:
	del sum.exe sum.o