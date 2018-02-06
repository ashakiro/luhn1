CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= luhn.cpp luhntest.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=luhn

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
