#include <stdio.h>
#include <stdlib.h>

struct Trojkat
{
    double a;
    double b;
    double c;
};

void foo(struct Trojkat trojfoo, struct Trojkat *wsktroj)
{
    *wsktroj = trojfoo;
}
int main()
{
    struct Trojkat trojkat1, trojkat2;
    trojkat1.a = 3, trojkat1.b = 4, trojkat1.c = 5;
    foo(trojkat1, &trojkat2);
    printf("%f, %f, %f", trojkat2.a, trojkat2.b, trojkat2.c);
    return 0;
}
