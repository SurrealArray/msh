
  Omar Beltran
  RedID: 818036447
  cssc2146
  CS 570, Summer 2020
  Assignment 2, Microshell
  README.txt

File manifest: 
	main.c, main.h, getinput.c, getinput.h, process.c, process.h, run.c, run.h, msh.c, msh.h, 
	printuser.c, printuser.h, spaces.c, spaces.h, Makefile, README.txt

Compile Instructions:
	$ cd a2
	$ make

List of significant design decisions:
	Program gets the user's name and displays it. Parses "|" though strsep which will set the 
	number of  commands that will be executed. Then parses the spaces in each individual command 
	using strtok. 

List of extra features:
	None

List of all known deficiencies or bugs:
	Segmentation fault when doing command "ls|sort|grep msh.c|wc". Sementation will not occur when
	there are certain spaces between "|" on this command. Bug resides when using strtok in function 
	removeSpaces of file spaces.c, but unsure of how to fix. 

Lessons learned:
	Learned how to fork and pipe processes that communicate with eachother. Learned how to run 
	linux commands through a program.