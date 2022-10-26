CC := g++
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

intruso:
	$(CC) $(CFLAGS) -c src/intruso.cpp -o intruso.o


main: intruso
	$(CC) $(CFLAGS) intruso.o main.cpp -o main.out

clean:
	$(RM) -r intruso.o $(TARGET)
