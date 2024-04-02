
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define EXECVP

int main( int argc, char *argv[])
{
#ifdef EXECVP
    printf( "calling helloworld with execvp\n");
    char *const args[] = { "PLACEHOLDER_FOR_RENAMING_THE_PROCESS", "1st", "2nd", "3rd", "4th", "5th", NULL};
    if ( execvp( "./helloworld", args) < 0)
    {
        printf( "error exec: %d - %s\n", errno, strerror( errno));
    }
#else
    printf( "calling helloworld with execlp\n");
    if ( execlp( "./helloworld", "PLACEHOLDER_FOR_RENAMING_THE_PROCESS 1st 2nd 3rd 4th 5th", NULL) < 0)
    {
        printf( "error exec: %d - %s\n", errno, strerror( errno));
    }
#endif
    return 0;
}