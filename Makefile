########################################################################
# Makefile for Assignment 2
# Omar Beltran
# RedID: 818036447 
# cssc2146
# CS 570, Summer 2020
# Assignment #2, Microshell
# Makefile
########################################################################

EXEC = msh
FILES = main.c microshell.c printuser.c getinput.c run.c spaces.c process.c
CC = gcc

$(EXEC):
	$(CC) -o $(EXEC) $(FILES)
	rm -f *.o
	./msh

clean:
	rm -f *.o $(EXEC)

###########################[ EOF: Makefile ]############################
