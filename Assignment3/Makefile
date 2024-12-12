CXX = g++
CXXFLAGS = -std=c++11 -Wall -pthread

GTEST_LIB = -lgtest -lgtest_main

MAIN_SOURCES = main.cpp transformer.cpp autobot.cpp decepticon.cpp squad.cpp weapon.cpp dinobot.cpp

MAIN_OBJECTS = main.o transformer.o autobot.o decepticon.o squad.o weapon.o dinobot.o

TEST_SOURCES = test-transformer.cpp test-autobot.cpp test-decepticon.cpp test-squad.cpp test-weapon.cpp test-dinobot.cpp transformer.cpp autobot.cpp decepticon.cpp squad.cpp weapon.cpp dinobot.cpp

TEST_OBJECTS = test-transformer.o test-autobot.o test-decepticon.o test-squad.o test-weapon.o test-dinobot.o transformer.o autobot.o decepticon.o squad.o weapon.o dinobot.o

EXECUTABLE = main_program
TEST_EXECUTABLE = test

all: $(EXECUTABLE) test

$(EXECUTABLE): $(MAIN_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(MAIN_OBJECTS)

test: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(TEST_OBJECTS) $(GTEST_LIB)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

transformer.o: transformer.cpp
	$(CXX) $(CXXFLAGS) -c Bumblebee.cpp -o transformer.o

decepticon.o: decepticon.cpp
	$(CXX) $(CXXFLAGS) -c Prime.cpp -o decepticon.o

autobot.o: autobot.cpp
	$(CXX) $(CXXFLAGS) -c Liege_maximo.cpp -o autobot.o

weapon.o: weapon.cpp
	$(CXX) $(CXXFLAGS) -c Item.cpp -o weapon.o

squad.o: squad.cpp
	$(CXX) $(CXXFLAGS) -c Song.cpp -o squad.o
	
test-transformer.o: test-transformer.cpp
	$(CXX) $(CXXFLAGS) -c test-transformer.cpp -o test-transformer.o

test-decepticon.o: test-decepticon.cpp
	$(CXX) $(CXXFLAGS) -c test-decepticon.cpp -o test-decepticon.o
	
test-autobot.o: test-autobot.cpp
	$(CXX) $(CXXFLAGS) -c test-autobot.cpp -o test-autobot.o

test-dinobot.o: test-dinobot.cpp
	$(CXX) $(CXXFLAGS) -c test-dinobot.cpp -o test-dinobot.o

test-squad.o: test-squad.cpp
	$(CXX) $(CXXFLAGS) -c test-squad.cpp -o test-squad.o

test-weapon.o: test-weapon.cpp
	$(CXX) $(CXXFLAGS) -c test-weapon.cpp -o test-weapon.o
	
clean:
	rm -f $(MAIN_OBJECTS) $(TEST_OBJECTS) $(EXECUTABLE) $(TEST_EXECUTABLE)
