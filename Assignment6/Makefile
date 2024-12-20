CC=g++

CXXFLAGS=-std=c++17 -Wall -I. -I/usr/include/gtest -pthread
LDFLAGS=-lgtest -lgtest_main -pthread

TEST_SOURCES=google_test.cpp
TEST_EXECUTABLE=tests

HEADERS=class1.h class2.h class3.h class_template.h

all: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(TEST_SOURCES) $(HEADERS)
	$(CC) $(CXXFLAGS) $(TEST_SOURCES) $(LDFLAGS) -o $@
clean:
	rm -rf $(TEST_EXECUTABLE) *.o
