#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n <= 0) return 0;

    for(int i = 0; i <= n; i++)
    {
        if(i*i == n) return 1;
    }

    return 0;
}
int main()
{
    if(1*1 == 1) printf("%d", foo(1));
    for(int i = -2; i < 10; i++)
    {
        if(foo(i)) printf("%d jest kwadratem jakiejs liczby\n", i);
        else printf("%d nie jest kwadratem zadnej liczby\n", i);
    }
    return 0;
}
