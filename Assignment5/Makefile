CXX = g++
CXXFLAGS = -Wall -Wpedantic -Werror
EXE = main
OBJECTS = tests.o autobot.o decepticon.o transformer.o 

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -lgtest -lpthread -o $@

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o $(EXE)

cleanall: clean
	rm -f *.cpp
