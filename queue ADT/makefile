main:	main.o menu.o insert.o delete.o peek.o display.o isempty.o
	gcc -g -o main main.o menu.o insert.o delete.o peek.o display.o isempty.o
main.o: main.c
	gcc -g -c -o main.o main.c
menu.o: menu.c
	gcc -g -c -o menu.o menu.c
insert.o: insert.c
	gcc -g -c -o insert.o insert.c
delete.o: delete.c
	gcc -g -c -o delete.o delete.c
peek.o:	peek.c
	gcc -g -c -o peek.o peek.c
display.o: display.c
	gcc -g -c -o display.o display.c
isempty.o: isempty.c
	gcc -g -c -o isempty.o isempty.c
clean:
	rm -rf *.o main
