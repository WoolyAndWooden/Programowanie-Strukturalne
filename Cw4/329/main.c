#include <stdio.h>
#include <stdlib.h>

int * foo()
{
    return malloc(sizeof(int));
}
int main()
{

    printf("%x", foo());
    return 0;
}
