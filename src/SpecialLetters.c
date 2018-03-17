#include "SpecialLetters.h"

#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>

int sp_add(SP * sp, char newLetter){
	char * list = NULL;
	int i; /* for */
	list = malloc(sizeof(char) * sp->lenght);
	errno = 0;
	if(list == NULL && errno){
		perror("malloc");
		return FAIL;
	}
	/* copy the last list */

	for(i = 0; i < sp->lenght; i ++){
		list[i] = sp->letters[i];
	}
	list[i] = newLetter;
	free(sp->letters);
	sp->letters = list;
	sp->lenght ++;
        return SUCCESS;	
}
void sp_init(SP * sp){
	sp->lenght = 0;
	sp->letters = NULL;
}
