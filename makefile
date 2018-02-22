all:
	gcc -o broadcasting_daemon src/main.c src/display_status.c -lncurses
	
