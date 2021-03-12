#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a, b, c;
    printf("Wpisz dlugosci bokow figury (a 0 0 dla kwadratu, a b 0 dla prostokata, a b c dla trojkata");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(b == 0 && c == 0) printf("Pole kwadratu to: %lf", a*a);
    else if(c == 0) printf("Pole prostokata to: %lf", a*b);

    else
    {
        double p;
        p = (a+b+c)/2;
        double P = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Pole trojkata to: %lf", P);
    }
}
