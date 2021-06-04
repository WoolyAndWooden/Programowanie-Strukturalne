#include <stdio.h>
#include <stdlib.h>
int len(char *nap)
{
    int i = 0;
    for(;nap[i]!=0; i++);
    return i;
}
int foo(char *nap, char *nap2)
{
    char *shortnap;
    if(len(nap) >= len(nap2))
        shortnap = nap2;
    else
        shortnap = nap;

    int count = 0;
    for(int i = 0; shortnap[i] != 0; i++)
    {
        if(shortnap[i]==' ')
            count++;
    }
    return count;
}
int main()
{
    char *nap = "Hello wo00000000000000000000000000000rld!";
    char * nap2 = "Abrakadabra hokus pokus a a a a";
    printf("%c", nap[5]);
    printf("%d", foo(nap, nap2));
    return 0;
}
