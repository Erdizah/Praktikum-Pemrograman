reversearray: reversearray.o  
	g++ -o reversearray reversearray.o 

reversearray.o: reversearray.cpp
	g++ -c reversearray.cpp

run:
	./reversearray.exe

clean:
	rm -f reversearray.exe reversearray.o