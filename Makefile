all: hello2

hello2: main.o SayHello2.o
	g++ main.o SayHello2.o -o hello2
	
main.o: main.cpp
	g++ -c main.cpp
	
SayHello2.o: SayHello2.cpp
	g++ -c SayHello2.cpp

clean:
	rm -rf *.o hello2