CC = g++
CFLAGS = -Wall -Wextra -O2
LDLIBS = -lm

build: algo.o

algo.o: algo.cpp
	g++ algo.cpp -c $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o
