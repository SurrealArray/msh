/*
 * Omar Beltran 
 * RedID: 818036447
 * cssc2146
 * CS 570, Summer 2020
 * Assignment #2, Microshell
 * printuser.c
 */

#include "printuser.h"

//prints user's name
void printUsername(){
	char *name = getenv("USER");
	printf("%s%% ", name);
}
