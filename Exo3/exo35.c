#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>








int main(int argc, char *argv[] )

{


	char *oprd_l =argv[1];
	int length = strlen(oprd_l) ; 
	int cpt =length-1; ; 
	int cpt_char_equ=0 ;


	for(int i=0 ; i<length/2 ;i++)

	{
		printf("char cpt %c\n", oprd_l[cpt]) ;
		printf("char i %c\n", oprd_l[i]) ;
		if(oprd_l[i]==oprd_l[cpt] || oprd_l[i]==(char)toupper(oprd_l[cpt] ))
		{
			cpt_char_equ ++ ;
        }
    cpt -- ;
		
    }

    if(cpt_char_equ==length/2)
    {
    	printf("The string is a Palindrome");
    }
    else
    {
    	printf("The string is not a  Palindrome");
    }


	
}