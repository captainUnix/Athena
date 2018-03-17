#ifndef SUCCESS
	#define SUCCESS 0
#endif
#ifndef FAIL
	#define FAIL -1
#endif


#ifndef _ATHENA_SPECIAL_LETTERS_
#define _ATHENA_SPECIAL_LETTERS_

typedef struct{
	char * letters;
	int lenght;
}SpecialLetters;

typedef SpecialLetters SP;

void sp_init(SP * sp);
int sp_add(SP * sp, char newLetter);
#endif
