multiplication: multiplication.o  
	g++ -o multiplication multiplication.o 

multiplication.o: multiplication.cpp
	g++ -c multiplication.cpp

run:
	./multiplication

clean:
	del multiplication.exe multiplication.o