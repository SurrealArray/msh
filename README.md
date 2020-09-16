# msh
Microshell

Emulator of a linux shell with limited capabilities.

Prints the user's name and allows user to provide input. Creates two or more process with a pipe to communicating with one another. 

Example:
"SurrealArray% ls -l | grep shell.c" 
Entering this input will list all the contents of the file shell.c. 



  Omar Beltran

File manifest: 
	main.c, main.h, getinput.c, getinput.h, process.c, process.h, run.c, run.h, msh.c, msh.h, 
	printuser.c, printuser.h, spaces.c, spaces.h, Makefile, README.txt

Compile Instructions:
	$ cd msh
	$ make

List of significant design decisions:
	Program gets the user's name and displays it. Parses "|" though strsep which will set the 
	number of  commands that will be executed. Then parses the spaces in each individual command 
	using strtok. 

List of all known deficiencies or bugs:
	Segmentation fault when doing command "ls|sort|grep msh.c|wc". Sementation will not occur when
	there are certain spaces between "|" on this command. Bug resides when using strtok in function 
	removeSpaces of file spaces.c. Possible fix incoming. 
