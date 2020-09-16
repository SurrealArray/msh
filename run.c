/*
 * Omar Beltran 
 * RedID: 818036447
 * cssc2146
 * CS 570, Summer 2020
 * Assignment #2, Microshell
 * run.c
 */

#include "run.h" 

int runCommand(char *line, int fileDesc, int cmd){
	
	removeSpaces(line); //sends command to remove spaces and save as arg[]
	
	//goes through process as long as there is a command
	if(arg[0] != NULL){
		if((strcmp(arg[0],"exit") == 0) || strcmp(arg[0], "exit\n")== 0) {
			printf("Program will exit\n");
			exit(0);
		}
		//returns file descriptor reader number
		return shellProcess(fileDesc,cmd);
	}
	return 0;
}
