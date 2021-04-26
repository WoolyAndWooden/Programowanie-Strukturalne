#include <stdio.h>
#include <stdlib.h>

double * foo(unsigned int n)
{
    return malloc(n * sizeof(double));
}
int main()
{
    double *tab1 = foo(5);
    tab1[0] = 5;
    printf("%d", tab1[0]);
    return 0;
}
