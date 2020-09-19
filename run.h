#include <string.h>
#include "microshell.h"

void removeSpaces(char *line);
int shellProcess(int fileDesc, int cmd);

char *arg[32]; //global variable of arguments in command 
