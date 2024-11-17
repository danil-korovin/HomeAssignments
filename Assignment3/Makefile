CXX = g++
EXE = main
OBJECTS = tests.o autobot.o decepticon.o otherbots.o transformer.o weapons.o

all: $(EXE)

$(EXE): $(OBJECTS)
	$(CXX) $^ -lgtest -lpthread -o $@

%.o: %.cpp %.h
	$(CXX) -c $<

clean:
	rm -f *.o $(EXE)

cleanall: clean
	rm -f *.cpp
