all: binf

binf: main.o func.o
	g++ main.o func.o -o binf
	
main.o: main.cpp
	g++ -c main.cpp
	
func.o: func.cpp
	g++ -c func.cpp

clean:
	rm -rf *.o binf