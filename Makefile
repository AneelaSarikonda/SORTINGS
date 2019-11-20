all: main
	@echo "BUILD DONE....."
	$(MAKE) -C /tmp/guest-Q9AqF2/SORTINGS/dummy/
main:*.o
	gcc $? -o $@
%.o:%.c
	gcc -c $? 
clean: 
	rm -rf *.o main
