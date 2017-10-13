#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

char *memcopy(char *str1, const char *str2, size_t n  ) ;

int main(int argc, char *argv[] )
{ 

 char *str1 ;
 char str2[4]="abcd" ;
 memcopy(str1, str2, 4 );
 printf("String str1 %s\n", str1);
}


char *memcopy(char *str1, const char *str2, size_t n  ) 
{
  int size = (int) n  ;
  str1= (char *)malloc(n*sizeof(char)) ;
  for(int i = 0 ; i<size; i++)
  {
  	*(str1 +i) = *(str2 +i);
  }
 return str1 ;
  
}


