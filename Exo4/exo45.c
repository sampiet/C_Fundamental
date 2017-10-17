#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv)
{
  char *ptr ;
  int c;
  int numb2 ;
  char *hex =(char *)malloc(4*sizeof(char));
  while ((c = getopt (argc, argv, "h:d:")) != -1)
  {
  	switch(c)
  	{
  	    case 'h':
  	    ptr =optarg ;
  	    int numb = (int)strtol(ptr, NULL,16);
  	    printf("The conversion to decimal value is: %d\n  ", numb) ;
  	    break;
            case 'd':
            ptr =optarg ;
  	    numb2 = (int)strtol(ptr, NULL,10);
  	    sprintf(hex,"%X", numb2) ;
  	    printf("The conversion to hexadimal value is: %s\n  ", hex) ;
  	    break ;
            default:
            abort ();
        }
  }
  return (0) ;
}
