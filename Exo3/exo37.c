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
    int cpt_num=0;; 
    int cpt_spec=0;
    int cpt_low =0 ;
    int cpt_uper= 0 ;
    
    for(int i=0 ; i<length; i++)
    {
    	if(oprd_l[i]>'a' && oprd_l[i]<'z' )
    	{
    		cpt_low++  ;
    	}
    	else
    		if(oprd_l[i]>'A' && oprd_l[i]<'Z' )
    		{
    			cpt_uper ++ ;
    		}
    		else
    		
    			if(oprd_l[i]>'0' && oprd_l[i]<'9' )
    			{
    				cpt_num++ ;
    			}
    			else
    				cpt_spec++ ;
    } 


    for(int a=0; a<=cpt_num ;a++)
    {
    	if(a==0)
    		printf("num :      |");
    	else
    		printf("-");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int a=0; a<=cpt_spec ;a++)
    {
    	if(a==0)
    		printf("special :  |");
    	else
    		printf("-");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    for(int a=0; a<=cpt_low ;a++)
    {
    	if(a==0)
    		printf("lower :    |");
    	else
    		printf("-");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for(int a=0; a<=cpt_uper ;a++)
    {
    	if(a==0)
    		printf("upper :    |");
    	else
    		printf("-");
    }





    
    



}
