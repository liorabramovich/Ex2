FLAGS = -Wall -g
AR = ar -rcs
CC = gcc

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

connections: my_mat.a main.o 
	$(CC) $(FLAGS) main.o my_mat.a -o connections -lm

my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a

main.o: main.c
	$(CC) $(FLAGS) -c main.c

all:	connections

clean: 
	rm -f *.a *.o connections

.PHONY: clean all
