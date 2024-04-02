
#include <stdlib.h>
#include <stdio.h>

int main( int argc, const char *argv[])
{
    printf( "Hello World!\n");

    for( int i = 0; i < argc; i++)
        printf( "argv[%d] = %s\n", i, argv[i]);

    return 0;    
}