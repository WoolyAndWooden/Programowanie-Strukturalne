#include <stdio.h>
#include <stdlib.h>

double foo(double * const wsk1, const double * wsk2)
{
    printf("%f, %f\n", *wsk1, *wsk2);
    return *wsk1 * *wsk2;
}

int main()
{
    double something = 5.3;
    for(double i = -2; i < 10.0; i+=0.5)
    {
        printf("foo(%f) = %f\n", i, foo(&i, &something));
    }
    return 0;
}
