responsi_1: responsi_1.o
	g++ -o responsi_1 responsi_1.o

responsi_1.o: responsi_1.cpp
	g++ -c responsi_1.cpp

test:
	./responsi_1.exe

clean:
	del responsi_1.exe responsi_1.o