#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    if(n == 0 || n == 1)
        return 3;
    if(n%2==0)
        return foo(n - 1) + n;
    return 2 * foo(n-1) - 2 * n;
}
int main()
{
    for(int i = 0; i <= 10; i++)
    {
        printf("a%d = %d\n", i, foo(i));
    }

    return 0;
}
