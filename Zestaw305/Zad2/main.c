#include <stdio.h>
#include <stdlib.h>

char foo(char nap[])
{
    for(int i = 0; nap[i]!=0; i++)
    {
        if(nap[i] >= 'A' && nap[i] <= 'Z' )
            return nap[i];
    }
    return 0;
}
int main()
{
    printf("%c", foo("aZrumencik"));
    printf("%c", foo("aArumencik"));
    printf("%c", foo("arumencik"));
    return 0;
}
