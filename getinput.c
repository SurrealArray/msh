/*
 * Omar Beltran 
 * RedID: 818036447
 * cssc2146
 * CS 570, Summer 2020
 * Assignment #2, Microshell
 * getinput.c
 */

#include "getinput.h" 

//gets user input and returns it
char *input(){
	char *buff = NULL;
	size_t buffSize;
	size_t lineSize;;
	lineSize = getline(&buff,&buffSize,stdin);
	return buff;
}
