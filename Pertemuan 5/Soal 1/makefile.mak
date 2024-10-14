fizzbuzz: fizzbuzz.o  
	g++ -o fizzbuzz fizzbuzz.o 

fizzbuzz.o: fizzbuzz.cpp
	g++ -c fizzbuzz.cpp

run:
	./fizzbuzz.exe

clean:
	del fizzbuzz.exe fizzbuzz.o