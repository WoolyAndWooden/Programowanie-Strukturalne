#include <stdio.h>
#include <stdlib.h>

int main()
{
    //wpisz wartosci zmiennych po wykonaniu danej linijki kodu
    int a = 162645; //tu wpisz swoj numer indeksu
    int b=a%12;
    int c=b%7;
    int d= (b+=4)-(c*=2); // b=13  , c=4  , d=9
    c=(d^=2); // b=13  , c=11  , d=11
    d=(b/=4)*(c-=3); // b=3  , c=8  , d=24
    return 0;
}

