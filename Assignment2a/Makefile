all: main

main: func.o main.o 
	g++ -o main func.o  main.o 
	
func.o: func.cpp
	g++ -c func.cpp	
	
main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *.o main