
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int comp_digit(int numb, int length_nub, char op) ;
bool check_operator(char  op) ;
int main(int argc, char *argv[] )
{ 
	char a= (char)argv[1][2] -'0' ;
	int  a_octal=  (int) a;
	char *oprd_l =argv[1];
	oprd_l++ ; 
	int numb=0;
	int length_nub= (int)strlen(oprd_l);
	int result ;
	if (( (int)strlen(oprd_l)-1) <2 )
	{
		printf("The number of arguments is'nt enough\n") ;
	}
	else if (check_operator((char)argv[1][0])==false)
	{
		printf("an unsupported operator\n") ;
	}
	else if(check_operator((char)argv[1][1]))
	{
		printf("length of operator string is not 1\n") ;
	}
	else if ((char)argv[1][1]=='0'&& (char)argv[1][2]=='x')
	{
		printf("You put hexidecimal number\n");
		numb = (int)strtol(oprd_l, NULL, 0);
		result=comp_digit(numb, length_nub, (char)argv[1][0]);
	}
	else if ((char)argv[1][1]=='0' && a_octal>0)
	{   
		printf("You put octal number\n");
		numb = (int)strtol(oprd_l, NULL, 8);
		result=comp_digit(numb, length_nub, (char)argv[1][0]);
	}
	else
	{  
		printf("You put decimal\n");
		numb = (int)strtol(oprd_l, NULL, 10);         
		result=comp_digit(numb, length_nub, (char)argv[1][0]);
	}
	printf("Final result %d\n", result);
	return 0 ;
}
int comp_digit(int numb, int length_nub, char op) 
{
	int value_get= 1 ;
	if (op=='*')
	{ 
		value_get = 1;
		for ( int i = 0; i <length_nub ; i++) 
		{
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
		printf("Final result %d\n", numb) ;
		return  value_get ;
	}
}
bool check_operator(char  op) 
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



