#declare the variable
CC=g++
CFLAGS=-c -Wall
TARGET=hello

all: $(TARGET)

hello: main.o func.o 
	$(CC) main.o func.o -o $(TARGET)
	
main.o: main.o
	$(CC) $(CFLAGS) main.cpp

func.o: func.o
	$(CC) $(CFLAGS) func.cpp

clean:
	rm -rf *.o hello
