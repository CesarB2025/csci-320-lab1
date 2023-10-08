explode: lab1.o main.o
	$(CC) -o $@ $?

lab1: lab1.c lab1.h
	$(CC) -c $?

main: main.c lab1.h
	$(CC) -c $?

clean:
	-rm -f *.o