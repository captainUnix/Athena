#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SUCCESS 0
#define EXIT_CMD "exit"
#define MAX 255

int readStdin(char * buffer,int max_lenght){
	int lenght;
	fgets(buffer,max_lenght,stdin);
	lenght = strlen(buffer);
	buffer[lenght - 1] = '\0';
	return lenght - 1;
}
void prompt(){
	char cmd[255];
	while(1){
		printf(">> ");
		readStdin(cmd,MAX);
		if(strcmp(cmd,EXIT_CMD) == 0) break;
	}
}

int main(){
	prompt();
	return SUCCESS;
}
