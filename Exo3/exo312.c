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
    int offset ;
    if( (oprd_l[0]==0 && oprd_l[1]=='x') ||(oprd_l[0]==0 && oprd_l[1]=='X'))
    {
    	offset = 2 ;
    }
    else
        {
        	offset = 0 ;
        }
    int numb =0 ; 
    int expnt= length-offset -1;
    for(int i= 0; i< (length-offset) ;i++)
    {  
    	if((char)oprd_l[i+offset]=='0' ) 
    		numb+= 0*pow(16, expnt);
    	else
    		if  ((char)oprd_l[i+offset]=='1' )
    			numb+=  pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='2' ) 
    			numb+=  2*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='3' ) 
    			numb+=  3*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='4' ) 
    			numb+=  4*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='5' ) 
    			numb+=  5*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='6' ) 
    			numb+=  6*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='7' ) 
    			numb+=  7*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='8' ) 
    			numb+=  8*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='9' ) 
    			numb+=  9*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='A'||(char)oprd_l[i+offset]=='a') 
    			numb+=  10*pow(16, expnt);
    		else 
    			if((char)oprd_l[i+offset]=='B'||(char)oprd_l[i+offset]=='b') 
    			numb+=  11*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='C'||(char)oprd_l[i+offset]=='c') 
    			numb+=  12*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='D'||(char)oprd_l[i+offset]=='d') 
    			numb+=  13*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='E'||(char)oprd_l[i+offset]=='e') 
    			numb+=  14*pow(16, expnt);
    		else
    			if((char)oprd_l[i+offset]=='F'||(char)oprd_l[i+offset]=='f') 
    			numb+=  15*pow(16, expnt);
    		expnt-- ;
    }
    
    printf("The equivalent integer value is %d\n", numb );

}
