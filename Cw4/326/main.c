#include <stdio.h>
#include <stdlib.h>

void * foo(int n, int *w)
{
    *w = n;
}
int main()
{
    int w = 5;
    foo(4, &w);
    printf("%d", w);
    return 0;
}
