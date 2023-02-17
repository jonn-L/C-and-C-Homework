#Default call
all: main

#Compile the object files
main: linked_list.o main.o
	gcc -Wall -o main linked_list.o use_linked_list.o

#Make linked_list.c into an object file	
linked_list.o: linked_list.h linked_list.c
	gcc -Wall -c linked_list.c

#Make use_linked_list.c into an object file
main.o: linked_list.h use_linked_list.c
	gcc -Wall -c use_linked_list.c

#Compile linked_list.o main.o	
compileonly: linked_list.o main.o

#Delete object files
deleteofiles:
	rm -f *.o

#Delete executable files	
deleteexec:
	rm -f main	

#Delete both object files and executable files
deleteall: deleteexec deleteofiles

#Create directory
createdir:
	mkdir test_directory

#Delete directory
deletedir:
	rmdir test_directory