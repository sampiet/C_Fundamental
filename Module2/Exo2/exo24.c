#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float tem_convert(char *str ,char *value);
int main(int argc, char *argv[])
{
    printf("the float value %f", tem_convert(argv[1] , argv[2])) ;
    return 0;
}
float tem_convert(char *str , char *value)
{
    float out_temp ;
    float in_temp= atof(value);
    if(strcmp(str, "c2k")==0)
    {
        out_temp= in_temp +273.15 ;
    }
    else if(strcmp(str, "f2k")==0)
    {
        out_temp=(in_temp-32)*5/9;
    }
    return out_temp;
}
