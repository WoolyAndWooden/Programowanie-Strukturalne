#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int cal;
    float wym;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane foo()
{
    struct Dane x;
    printf("Jesli chcesz liczbe wymierna, wpisz 0, jesli calkowita, wpisz 1\n");
    scanf("%d", &x.tp);

    if(x.tp)
    {
        printf("Podaj liczbe calkowita\n");
        scanf("d", &x.zaw.cal);
        return x;
    }
    printf("Podaj liczbe wymierna\n");
    scanf("f", &x.zaw.wym);
    return x;
};
int main()
{
    struct Dane x = foo();
    return 0;
}
