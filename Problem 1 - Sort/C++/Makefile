CC = g++
CFLAGS = -Wall -Wextra -Werror
LDLIBS = -lm

build: algo.o

algo.o:
	g++ algo.cpp -c algo.o $(CFLAGS)

.PHONY: clean
clean:
	rm *.o