all:ramesh

ramesh: main.o sort1.o
	gcc main.o sort1.o -o ramesh.o

main.o: main.c
	gcc -c main.c

sort1.o: sort1.c
	gcc -c sort1.o
