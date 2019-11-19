all: main
	@echo "BUILD DONE....."
main: main.o insersort.o selsort.o bubblesort.o mergesort.o quicksort.o
	gcc  main.o insersort.o selsort.o bubblesort.o mergesort.o quicksort.o -o main
main.o: main.c
	gcc -c main.c 
insersort.o: insersort.c
	gcc -c insersort.c 
selsort.o: selsort.c
	gcc -c selsort.c 
bubblesort.o: bubblesort.c
	gcc -c bubblesort.c 
mergesort.o: mergesort.c
	gcc -c mergesort.c 
quicksort.o: quicksort.c
	gcc -c quicksort.c 
clean: 
	rm -rf *.o
