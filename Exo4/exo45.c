#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
int size_mem(int numb) ;
int main (int argc, char **argv)
{
    char *ptr ;
    int c;
    int numb2 ;
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
                int size= size_mem(numb2 );
                char *hex =(char *)malloc(4*sizeof(char));
                snprintf(hex,4,"%X", numb2) ;
                printf("The conversion to hexadimal value is: %s\n  ", hex) ;
                break ;
            default:
                abort ();
        }
    }
    return (0) ;
}
int size_mem(int numb)
{
    int size=0;
    int cpt =1 ;
    bool cont= true ;
    while(cont)
    {
        if(numb<=255*cpt)
        {
            size= 2*cpt;
            cont=false ;
            break ;
        }
        else
        {
            cpt++;
        }
    }
    return  size ;
}
