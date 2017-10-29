
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("test\n");
    const char* s = getenv("USER");
    printf("USER :%s\n", s );
    const char* s2 = getenv("PATH");
    printf("PATH :%s\n", s2 );
    const char* s3 = getenv("HOME");
    printf("HOME :%s\n", s3);
}
