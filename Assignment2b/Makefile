CC=g++
CFLAGS=-c -Wall
TARGET=solve

all: $(TARGET)

$(TARGET): main.o solution.o  
	$(CC) main.o solution.o -o $(TARGET)
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

solution.o: solution.cpp
	$(CC) $(CFLAGS) solution.cpp

clean:
	rm -rf *.o $(TARGET)
