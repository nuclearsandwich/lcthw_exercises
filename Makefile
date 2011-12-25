CFLAGS=-Wall -g

all: ex1 ex3 ex4 ex5 ex6

run: all
	./ex1
	echo
	./ex3
	echo
	./ex4
	echo
	./ex5
	echo
	./ex6

clean:
	rm -rf ex1 ex3 ex4 ex5 ex*.dSYM
