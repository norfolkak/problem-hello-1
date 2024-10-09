CC=g++
CFLAGS=-c -Wall
TARGET=reverse

all: $(TARGET)

$(TARGET): main.o 
	$(CC) main.o -o $(TARGET)
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o reverseddata.txt $(TARGET)
