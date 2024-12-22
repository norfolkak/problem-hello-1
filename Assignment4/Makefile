# Compiler and flags
CXX = g++
CXXFLAGS = -I. -std=c++17 -g -fPIC -Wall -Werror -Wpedantic -O2

# Directories
SRC_DIR = .
TEST_DIR = tests
BUILD_DIR = build
SRC_BUILD_DIR = $(BUILD_DIR)/src
TEST_BUILD_DIR = $(BUILD_DIR)/tests

# Source files and objects
SRCS = transformer.cpp dinobot.cpp autobot.cpp decepticon.cpp weapon.cpp squad.cpp
MAIN_FILE = main.cpp
TEST_FILES = $(wildcard $(TEST_DIR)/test-*.cpp)

SRC_OBJS = $(patsubst %.cpp,$(SRC_BUILD_DIR)/%.o,$(SRCS))
MAIN_OBJ = $(SRC_BUILD_DIR)/main.o
TEST_OBJS = $(patsubst $(TEST_DIR)/%.cpp,$(TEST_BUILD_DIR)/%.o,$(TEST_FILES))

# Output binaries
PROGRAM = $(BUILD_DIR)/power
TEST_BINARY = $(BUILD_DIR)/RunTests

# GoogleTest flags
LDFLAGS = -lgtest -lgtest_main -lpthread

all: $(PROGRAM) $(TEST_BINARY)

build_dirs:
	mkdir -p $(SRC_BUILD_DIR) $(TEST_BUILD_DIR)

$(PROGRAM): $(SRC_OBJS) $(MAIN_OBJ)
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $^

$(TEST_BINARY): $(SRC_OBJS) $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_BINARY) $^ $(LDFLAGS)

$(SRC_BUILD_DIR)/%.o: %.cpp | build_dirs
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TEST_BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp | build_dirs
	$(CXX) $(CXXFLAGS) -c $< -o $@

run-tests: $(TEST_BINARY)
	./$(TEST_BINARY)

run-main: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
