CC = g++
CPPFLAGS = -Wall -std=c++11

all: number-converter

number-converter:
	$(CC) -o number-converter main.cpp number-convert.h number-convert.cpp

.PHONY: clean
clean:
	$(info -- cleaning the directory --)
	rm -f *.gch
	rm -f number-converter
