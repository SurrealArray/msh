#include "printuser.h"

//prints user's name
void printUsername(){
	char *name = getenv("USER");
	printf("%s%% ", name);
}
