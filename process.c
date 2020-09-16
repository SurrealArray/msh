/*
 * Omar Beltran 
 * RedID: 818036447
 * cssc2146
 * CS 570, Summer 2020
 * Assignment #2, Microshell
 * process.c
 */

#include "process.h"

int shellProcess(int fileDesc, int cmd){
	
	int fd[2]; //file descriptor that either reads(0) or writes(1)
	pipe(fd); //pipes through the file descriptor 
	pid = fork(); //creates a child process 
	
	if(pid == 0){ //runs child process
	
		//runs first command when there is more than one command
		if(cmd == 1 && cmd != numOfCommands){
			dup2(fd[1],STDOUT_FILENO); 
		}
		//runs middle command when there are more than two commands
		else if(cmd > 1 && cmd < numOfCommands){
			dup2(fileDesc,STDIN_FILENO);
			dup2(fd[1],STDOUT_FILENO);	
		}
		//runs last command even if there is only one command
		else{
			dup2(fileDesc,STDIN_FILENO);
		}
		//executes command
		if(execvp(arg[0],arg) == -1){
			printf("Error: command %s does not exist in this shell\n",arg[0]);
			exit(EXIT_FAILURE);
		}
	}
	else{ //runs parent process
		close(fd[1]); //closes file descriptor writer
		wait(NULL); //waits for processes to finish
	}
	
	//closes file descriptor reader when on last command
	if(cmd == numOfCommands){
		close(fd[0]);
	}
	
	return fd[0];
}
