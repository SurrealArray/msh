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
