#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
int string_len(char *ptr);
int main(int argc, char *argv[] )
{
	for(int i = 1 ; i<argc ; i ++)
	{
		printf("The string length is %d for the argument %d \n", (int) string_len(*(argv +i)), i) ;	
	}
	return 0 ;
}
int string_len(char *ptr)
{
	int cpt=0;
	while(ptr[0]!='\0')
	{
		cpt++ ;
		ptr++ ;
	}
	return cpt ;
}
