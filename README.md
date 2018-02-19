# broadcasting-daemon

Description:

	A peer to peer broadcasting daemon, the used UDP datagrams for broadcasting to all the machines of the network.

Target Machine:

	This program has been developed and tested on an machine running Arch-Linux on a 64 bit X-86 architecture. The peer network computer used ran Ubuntu-Mate on a 32-bit X-86 machine.

External Dependencies:

	Following external binaries are required to build the program:
	
    	1. make – the build tool
    	2. libncurses- ncurses library is required to properly position the cursor on the screen by clearing the rest of the historical commands on the terminal when the server is running.

How To Build:

	if you have make installed on your system you can just run:
	make
	The detailed build command is:
    	1. cd broadcasting-daemon (Navigate to the project directory)
    	2. gcc -o broadcasting_daemon src/main.c src/display_status.c -lncurses

Screenshots:

	The screenshots from when I tested the program on the two aforementioned machines are present in the images directory.


Happy Broadcasting!!!!!
