
all: printToCoord.h++ printToCoord.cpp
	g++ -std=c++11 -o printTest main.cpp printToCoord.cpp

clean:
	rm *.o printTest
