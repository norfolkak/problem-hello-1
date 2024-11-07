CC=g++
CFLAGS=-c -Wall
TARGET=test
OBJECT_FILES=main.o transformer.o weapon.o autobot.o decepticon.o dinobot.o squad.o

all: $(TARGET)

$(TARGET): $(OBJECT_FILES) 
	$(CC) $(OBJECT_FILES) -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp	
	
transformer.o: transformer.cpp
	$(CC) $(CFLAGS) transformer.cpp	
	
weapon.o: weapon.cpp
	$(CC) $(CFLAGS) weapon.cpp
	
autobot.o: autobot.cpp
	$(CC) $(CFLAGS) autobot.cpp

decepticon.o: decepticon.cpp
	$(CC) $(CFLAGS) decepticon.cpp

dinobot.o: dinobot.cpp
	$(CC) $(CFLAGS) dinobot.cpp
	
squad.o: squad.cpp
	$(CC) $(CFLAGS) squad.cpp

clean:
	rm -rf *.o $(TARGET)
