main:	main.o menu.o push.o pop.o peek.o display.o isempty.o
	gcc -g -o main main.o menu.o push.o pop.o peek.o display.o isempty.o
main.o: main.c
	gcc -g -c -o main.o main.c
menu.o: menu.c
	gcc -g -c -o menu.o menu.c
push.o: push.c
	gcc -g -c -o push.o push.c
pop.o: pop.c
	gcc -g -c -o pop.o pop.c
peek.o:	peek.c
	gcc -g -c -o peek.o peek.c
display.o: display.c
	gcc -g -c -o display.o display.c
isempty.o: isempty.c
	gcc -g -c -o isempty.o isempty.c
clean:
	rm -rf *.o main
