#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#define BUFFER_SIZE   11 
//char   buffer[BUFFER_SIZE]={'F'
//@Ewoud : I try buffer[BUFFER_SIZE]={'F'}, but I do  not get the same result.  
char   buffer[BUFFER_SIZE]={'F','F','F','F','F','F','F','F','F','F','F'} ;
void   write(char a) ;
char   read(int position) ;
char   *pointer_start ;
char   *pointer_end ;
int     count_fill ;
int main(int argc, char *argv[] )
{
	count_fill= 0 ;
	pointer_start= &buffer[10];
	pointer_end  = &buffer[10];
	char  value ;
	char array[]="abcdeghi";//for testing write function
	int size     =strlen(array) ;
	for(int i=0 ; i<size  ;i++)
	{
		write(array[i])  ;
	}
	printf("The   content of the buffer is %s\n", buffer)  ;
}
void   write(char value )
{
	if(count_fill<BUFFER_SIZE)
	{
		if((pointer_end>=pointer_start) && (pointer_end< &buffer[BUFFER_SIZE]))
		{
			*pointer_end=value ;
			pointer_end++ ;
			count_fill++ ;
		}
		else 
		{
			if(pointer_end==&buffer[BUFFER_SIZE])
			{       
				*pointer_end=value ;
				pointer_end=&buffer[0];
				count_fill++ ;
			}
			else
			{
				*pointer_end=value ;
				pointer_end++ ;
				count_fill++ ;
			}
	    }
	}
	else
	{   
		if(pointer_start==pointer_end)
		{
			*pointer_start=  value ;
			pointer_start ++ ;
		}
		else
		{
			if(pointer_start<&buffer[BUFFER_SIZE])
			{
				*pointer_start = value ;
				pointer_end  = pointer_start;
				pointer_start ++;
			}
			else
			{
				if(pointer_start==&buffer[BUFFER_SIZE])
				{
					*pointer_start = value ;
					pointer_start = &buffer[0] ;
					pointer_end  = pointer_start;
					pointer_start ++ ;
				}
			}
		}
	}
}


