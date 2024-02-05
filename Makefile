output: main.o stack.o node.o
	gcc -Wall -Wextra main.c stack.c node/node.c -o output

node.o: node/node.c node/node.h
	gcc -c node/node.c

clean:
	rm *.o output

.SILENT:
	output
	clean