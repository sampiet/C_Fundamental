#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char *argv[] )
{    
	
	for(int i = 1 ; i<argc ; i ++)
	{
	  printf("String %d\n", (int)strlen(*(argv +i))) ;	
	}
    return 0 ;

}
