reratafungsi: reratafungsi.o  
	g++ -o reratafungsi reratafungsi.o 

reratafungsi.o: reratafungsi.cpp
	g++ -c reratafungsi.cpp

test:
	./reratafungsi.exe

clean:
	del reratafungsi.exe reratafungsi.o reratafungsi.o