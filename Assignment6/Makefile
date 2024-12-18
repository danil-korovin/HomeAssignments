CXX = g++
CXXFLAGS = -Wall -Wpedantic -Werror
EXE = main
OBJECTS = Tests.o

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -lgtest -lpthread -o $@

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o $(EXE)

cleanall: clean
	rm -f *.cpp
