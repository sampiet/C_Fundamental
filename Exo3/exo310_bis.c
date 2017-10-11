#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
int main(int argc, char *argv[] )
{ 
    char *oprd_l =argv[1];
    int length= (int)strlen(oprd_l) ;
    
    for(int i=0 ; i< length;i++)
    {   
        if((char)oprd_l[0]==' ')
        oprd_l++ ;
    }
    int length2=(int)strlen(oprd_l) -1 ;
    oprd_l+=length2 ;
    int cpt=0 ;
     while ((char)oprd_l[0]==' ') 
     { 
        cpt ++ ;
        oprd_l-- ;
     }
        
    int ofset =length2 +1 -cpt ; 
    oprd_l-= ofset ;
    char ptr[(length2-cpt )];
    strncpy(ptr, oprd_l,(length2-cpt +2)  ) ;
    printf("The length of string before transformation is  : %d\n", length);    
    printf("The length of string after transformation is  : %d\n",  (int)strlen(ptr) -1);
    printf("Final solution ptr %s\n", ptr);

    return 0 ;
}

