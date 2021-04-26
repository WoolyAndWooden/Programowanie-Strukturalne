#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    if(n == 0) return 1;
    if(n == 1) return 2;
    if(n == 2) return -2;
    if(n%3 == 0) return 2 * foo(n/3);
    if(n%3 == 1) return foo(((n - 1) / 3) * 2) - 1;
    if(n%3 == 2) return foo(n-1);
}
int main()
{
    for(int i = 0; i <=6; i++)
    {
        printf("foo(%d) = %d\n", i, foo(i));
    }
    return 0;
}
