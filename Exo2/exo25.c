#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int   numb_div(int  numb) ;
int  *divid_numb(int  numb) ;
int main(int argc, char *argv[] )
{ 
	char *oprd_l =argv[1];
	int numb = (int)strtol(oprd_l, NULL, 10);
	int cpt=numb_div(numb) ;
	int *p ; 
	p= divid_numb(numb); 
	int sum_div =numb;
	for(int i =0 ; i<cpt ; i++)
	{
		sum_div+= *p ;
		p++;
	}
	if(sum_div==2*numb)
	{
		printf("The number is a perfect") ;
	}
	else 
	{
		printf("The number is not a perfect number") ;
	}
}
int  numb_div(int  numb)
{
	int cpt=0;
	for(int i=1; i<numb; i++)
	{
		if((numb %i)==0)
		{
			cpt++ ;
		}
	}
	return cpt ;
}
int  *divid_numb(int  numb)
{
	int cpt = numb_div(numb) ;
	int  *array_div=malloc(sizeof(int)*cpt) ;
	int j=0;
	for(int i=1; i<numb; i++)
	{
		if((numb %i)==0)
		{
			array_div[j]= i ;
			j++;
		}
	}
	return array_div ;
}





