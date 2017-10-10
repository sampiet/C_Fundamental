#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>


int main(int argc, char *argv[] )

{ 
    char *oprd_l =argv[1];
    char a[]= "; :" ;
    char *token ;
    token=strtok(oprd_l , a) ;
        printf("token string %s\n", oprd_l);

    while(token!=NULL)
    {
    	printf("token string %s\n", token);
    	token=strtok(NULL, a) ;
    }

 return 0;

}

  