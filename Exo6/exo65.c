#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
int  string_length(const char *str1 ) ;
bool string_equal(const char *str1,const char *str2, int size ) ;

int main(int argc, char *argv[] )

{
  char *oprd_l1 =argv[1];
  char *oprd_l2 =argv[2] ;
  int size = string_length(oprd_l1)  ;
  if(string_length(oprd_l1)!=string_length(oprd_l2))
  {
    printf("Length of the string not equal ");
  }
  else
  {
    if(string_equal(oprd_l1, oprd_l2, size))
    { 
      printf("Strings are equal") ;
    }
    else
    {
      printf("Strings are not equal") ;
    }
  }

   
}

bool string_equal(const char *str1,const char *str2, int size) 
{
  bool val = true  ; 
  for (int i=0 ;i <size; i++)
  {
    if(*(str1+i)!=*(str2+i))
    {
      val= false ;
    }

  }
  return val ;
}

int  string_length(const char *str1 ) 
{
  int cpt= 0 ;
  while(*(str1+cpt)!='\0')
  {
    cpt ++ ;
  }
  return cpt ;
}



