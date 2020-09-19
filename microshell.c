#include "microshell.h"

void shell(){
	
	while(1){
		char *buffer;
		
		printUsername(); //prints user's name from function
		buffer = input(); //gets user input
		
		int i = 0;
		
		//parse and command are temporarily used for strtok 
		char *parse;
		char **command = malloc(strlen(buffer));
		
		//parses user's input by | using strsep
		while((	parse = strsep(&buffer,"|")) != NULL){
			command[i] = parse; 
			i++;
		}
		command[i] = NULL;
		
		int fileDesc = 0; //used to keep track of pipes 
		numOfCommands = i; //number of commands to run	
		char *commandStr; //individual command that is ran
		
		for(i = 1; i <= numOfCommands; i++){
			commandStr = command[i-1]; //command string is taken from each parsed token
			fileDesc = runCommand(commandStr,fileDesc,i); //file descriptor of last pipe saved
		}
	}
}

