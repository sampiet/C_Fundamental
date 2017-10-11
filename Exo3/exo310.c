#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>


// number_char compute the  amount of  char inside of the strings
int number_char(char *oprd_l) ;

int main(int argc, char *argv[] )
{ 
    char *oprd_l =argv[1];
    char a[]= " " ;
    int lgth = (int) strlen(oprd_l ) ;
    int cpt=1000 ;
    char *token=strtok(argv[1], a) ; 
    char *ptr;
    ptr=(char *)malloc(cpt*sizeof(char)) ;
    while(token!=NULL)
    {
        strcat(ptr, token) ;
        token=strtok(NULL, a) ;
    }
    printf("The  length of the stringg before cat %d\n",lgth ) ; 
    printf("The  length of the stringg after cat %d\n",(int)strlen(ptr)) ; 
    printf("Final string %s\n", ptr) ; 

    return 0 ;


    

}

int number_char(char *oprd_l)
{
	char a[]= " " ;
	char *token=strtok(oprd_l , a) ;
	int  cpt= 0 ;
    while(token!=NULL)
    {
        cpt+=strlen(token);
        token=strtok(NULL, a) ;
    }
    return cpt ;


} 
