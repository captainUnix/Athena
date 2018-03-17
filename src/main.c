#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Parser.h"
#include "SpecialLetters.h"

#ifndef SUCCESS
	#define SUCCESS 0
#endif

#define EXIT_CMD "exit"
#define MAX 255

/**
 * Read on stdin and exclude '\n'
 * @param buffer : read buffer
 * @param max_lenght : size max of buffer
 * @return lenght of reading string
 **/

int readStdin(char * buffer,int max_lenght){
	int lenght;
	fgets(buffer,max_lenght,stdin);
	lenght = strlen(buffer);
	buffer[lenght - 1] = '\0';
	return lenght - 1;
}

/**
 *Simple prompt
 **/

void prompt(){
	char cmd[255];
	while(1){
		printf(">> ");
		readStdin(cmd,MAX);
		if(strcmp(cmd,EXIT_CMD) == 0) break;
	}
}

int main(){
	int i;
	SpecialLetters sp_letters;
	sp_init(&sp_letters);
	sp_add(&sp_letters,':');
	sp_add(&sp_letters,'t');
	sp_add(&sp_letters,'u');
	printf("letters : ");
	for(i = 0; i < sp_letters.lenght;i++)
		printf("%c ",sp_letters.letters[i]);
	printf("\n");
	prompt();
	return SUCCESS;
}
