
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int comp_digit(int numb, int length_nub, char op) ;
bool check_operator(char  op) ;
int main(int argc, char *argv[] )
{
    char *oprd_l =argv[1];
    oprd_l++ ;
    if (((int)strlen(oprd_l)-1)<2)
    {
        printf("The number of arguments is'nt enough") ;
    }
    else 
    if (check_operator((char)argv[1][0])==false)
        {
            printf("an unsupporyed operator") ;
        }
  
    else
    if(check_operator((char)argv[1][1]))
        {
            printf("length of operator string is not 1") ;
        }
        else
        {
            int  numb  ; 
            int result ; 
            char *ptr ; 
            int  len = (int)strlen(oprd_l)  ;
            numb= (int)strtol(oprd_l,&ptr,  10) ;
            printf("Value Get %d\n ",  numb ) ;     
            result=comp_digit(numb, len,(char)argv[1][0]) ; 
            printf("Final result %d\n ",  result) ;
        }
    return 0;
}
int comp_digit(int numb, int length_nub, char op) 
{
    int value_get= 1 ;
    if (op=='*')
    {
        value_get = 1;
        for ( int i = 0; i <length_nub ; i++) 
        {
        printf("Multiplication %d\n ",  numb ) ;    
        value_get *= numb %10 ;
        numb= numb/10 ;
        }
        return  value_get ;
    }
    else if (op=='+')
    {
        value_get = 0;
        for ( int i = 0; i <length_nub ; i++) 
        {
            value_get += numb % 10 ;
            numb= numb/10 ;
        }
        return (value_get) ;
    }
  
    else if (op=='-')
    {      
        value_get = 0;
        for ( int i = 0; i <length_nub ; i++) 
        {
            value_get -= numb % 10 ;
            numb= numb/10 ;
        }
        return  value_get ; 
    }
    
}

bool check_operator(char op) 
{
    if(op=='+'|| op=='-'|| op== '*'|| op== '/'|| op== '%')
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}



