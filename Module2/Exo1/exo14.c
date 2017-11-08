#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void word_2_piglatin(char *in_str, char *out_str);
int main(int argc, char *argv[])
{
    char *in_str ;
    in_str=(char *)malloc(30*sizeof(char));
    strcpy(in_str, "Mabcd  Iq iop ymp");
    char *ptr ;
    ptr= strtok(in_str, " ");
    while(ptr!=NULL)
    {
        if(ptr[0]=='a'||ptr[0]=='A'|| ptr[0]=='o'||ptr[0]=='O'|| ptr[0]=='i'||ptr[0]=='I'|| ptr[0]=='u'||ptr[0]=='U'|| ptr[0]=='e'||ptr[0]=='E')
        {
            char *str_out ;
            int size = (int)strlen(ptr)+3;
            str_out= (char *)malloc(size*sizeof(char)) ;
            word_2_piglatin(ptr, str_out);
            printf("%s  ", str_out) ;
            free(str_out);
        }
        else
        {
            char *str_out2 ;
            int size = (int)strlen(ptr)+2;
            str_out2= (char *)malloc(size*sizeof(char)) ;
            word_2_piglatin(ptr, str_out2);
            printf("%s ", str_out2) ;
            printf(" ");
            free(str_out2);
         }
         ptr= strtok(NULL, " ");
    }
}
void word_2_piglatin(char *in_str, char *out_str)
{
    char prt= in_str[0];
    if(prt=='a'||prt=='A'|| prt=='o'||prt=='O'|| prt=='i'||prt=='I'|| prt=='u'||prt=='U'|| prt=='e'||prt=='E')
    {
        int size = (int)strlen(in_str)+3;
        int max = (int)strlen(in_str) ;
        for(int i=0 ; i<max;i++)
        {
            *out_str= *in_str;
             out_str++;
             in_str++;
        }
        *out_str='w';
        out_str++;
        *out_str='a';
        out_str++;
        *out_str='y';
    }
    else
    {
        int size=(int)strlen(in_str)+2;
        int length= (int)strlen(in_str)-1; 
        int max=size -3; 
        int cpt =1  ;
        for(int i=0 ; i<length;i++)
        {
            *out_str=*(in_str+cpt);
            out_str++;
            cpt++ ;
        }
        *out_str=*in_str ;
        out_str++;
        *out_str='a';
        out_str++;
        *out_str='y';
    }
}


