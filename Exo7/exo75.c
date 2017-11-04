#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int string_len(char *string);
bool string_equal(char *strg1, char *strg2, int length);
int main (int argc, char *argv[])
{
    char *str1=argv[1];
    char *str2=argv[2];
    if(string_len(str1)!=string_len(str2))
    {
        printf("The string length are not equal");
    }
    else
    {
        int length=string_len(str1);
        if( string_equal(str1,str2,length))
        {
            printf("The string are equal");
        }
        else
        {
            printf("The string are  not equal");
        }
    }
}
int string_len(char *string)
{
    int cpt=0 ;
    while(string[cpt]!='\0')
    {
        cpt++;
    }
    return cpt ;
}
bool string_equal(char *strg1, char *strg2, int length )
{
    bool bool_value = true ;
    for(int i =0 ; i<length;i++)
    {
        if(strg1[i]!=strg2[i])
        {
            bool_value= false;
            break ;
        }
    }
    return bool_value;
}
