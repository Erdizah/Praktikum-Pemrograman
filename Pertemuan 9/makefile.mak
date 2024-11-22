pengurutan: pengurutan.o  
	g++ -o pengurutan pengurutan.o 

pengurutan.o: pengurutan.cpp
	g++ -c pengurutan.cpp

test:
	./pengurutan.exe

clean:
	del pengurutan.exe pengurutan.o pengurutan.o