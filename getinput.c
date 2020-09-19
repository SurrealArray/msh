#include "getinput.h" 

//gets user input and returns it
char *input(){
	char *buff = NULL;
	size_t buffSize;
	size_t lineSize;;
	lineSize = getline(&buff,&buffSize,stdin);
	return buff;
}
