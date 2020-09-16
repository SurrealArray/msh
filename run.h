/*
 * Omar Beltran 
 * RedID: 818036447
 * cssc2146
 * CS 570, Summer 2020
 * Assignment #2, Microshell
 * run.c
 */

#include <string.h>
#include "microshell.h"

void removeSpaces(char *line);
int shellProcess(int fileDesc, int cmd);

char *arg[32]; //global variable of arguments in command 
