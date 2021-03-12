#include<stdio.h>
#include<stdlib.h>

int main()
{
    signed int a, b, c;
    int d = 5;
    printf("Wpisz dwie liczby");
    scanf("%d %d",&a, &b);
    int bezwz_a=abs(a);
    int bezwz_b=abs(b);

    if(bezwz_a == bezwz_b)
    {
        printf("obie liczby maja rowna wartosc bezwzgledna");
    }
    else
    {

        if(bezwz_a>bezwz_b)
        {
            c=a;
        }
        else if(bezwz_b>bezwz_a)
        {
            c = b;
        }
        printf("%d ma wieksza wartosc bezwzgledna", c);
    }
}
