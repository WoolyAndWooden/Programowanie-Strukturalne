#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct Trojkat
{
    double a;
    double b;
    double c;
};

double foo(struct Trojkat trojfoo)
{
    double p = (trojfoo.a + trojfoo.b + trojfoo.c)/2;
    return sqrt(p * (p - trojfoo.a) * (p - trojfoo.b) * (p- trojfoo.c));
}
int main()
{
    struct Trojkat trojkat1;
    trojkat1.a = 3, trojkat1.b = 4, trojkat1.c = 5;
    printf("%lf", foo(trojkat1));
    return 0;
}
