#include "spaces.h"

void removeSpaces(char *line){
	
	//parse and command are temporarily used for strtok 
    char *parse;
    char **command = malloc(sizeof(line)/sizeof(char));

	int i = 0;

	//parses command by spaces using strtok 
	parse = strtok(line," \t\n");
    while(parse!=NULL){
        command[i] = parse;
        i++;
        parse = strtok(NULL," \t\n");
    }
	
    int size = i; //sends # of arguments to size
    
	for(i = 0;i<size;i++){
        arg[i] = command[i]; //sends each argument to global variable arg[]
	}
    arg[size] = NULL; //null terminates arg
}
