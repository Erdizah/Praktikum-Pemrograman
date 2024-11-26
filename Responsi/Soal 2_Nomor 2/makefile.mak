responsi_2: responsi_2.o
	g++ -o responsi_2 responsi_2.o

responsi_2.0: responsi_2.cpp
	g++ -c responsi_2.cpp

test:
	./responsi_2.exe

clean:
	del responsi_2.exe responsi_2.o