all: main.c add.c sub.c add.h sub.h
	gcc main.c add.c sub.c add.h sub.h -o userfile -I.
	
assembly: main.c add.c sub.c add.h sub.h
	gcc -S main.c add.c sub.c add.h sub.h
	
clean:
	del userfile.exe