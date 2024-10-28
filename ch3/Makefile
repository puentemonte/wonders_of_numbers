flags=-Wall -O2 -std=c2x
ldflags=

all: clean main

main: main.o
	cc ${flags} $^ -o $@ ${ldflags}

main.o: main.c
	cc ${flags} -c $^

ants: ants.o
	cc ${flags} $^ -o $@ ${ldflags}

ants.o: ants.c
	cc ${flags} -c $^

clean:
	rm -f *.o main
	rm -f *.o ants
