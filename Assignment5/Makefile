# Compiler and flags
CXX = g++
CXXFLAGS = -I. -std=c++17 -g -fPIC -Wall -Werror -Wpedantic -O2

# Directories
TEST_DIR = tests
BUILD_DIR = build

# Source files
SRCS = transformer.cpp dinobot.cpp autobot.cpp decepticon.cpp weapon.cpp squad.cpp
MAIN_FILE = main.cpp
OBJS = $(SRCS:.cpp=.o)
TEST_FILES = $(wildcard $(TEST_DIR)/test-*.cpp)
TEST_OBJECTS = $(TEST_FILES:.cpp=.o) $(OBJS)

# Headers
DEPS = transformer.h dinobot.h autobot.h decepticon.h weapon.h squad.h

# Output binaries
PROGRAM = $(BUILD_DIR)/power
TEST_BINARY = $(BUILD_DIR)/RunTests

# GoogleTest flags 
LDFLAGS = -lgtest -lgtest_main -lpthread


all: build $(PROGRAM)

build:
	mkdir -p $(BUILD_DIR)

$(PROGRAM): $(SRCS) $(MAIN_FILE)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(SRCS) $(MAIN_FILE)
	
test: $(SRCS) $(TEST_FILES)
	$(CXX) $(CXXFLAGS) -o $(TEST_BINARY) $(SRCS) $(TEST_FILES) $(LDFLAGS)

# Run tests
run-tests: test
	./$(TEST_BINARY)

run-main: $(PROGRAM)
	./$(PROGRAM)
	
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
