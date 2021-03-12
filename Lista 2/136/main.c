#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    printf("Wpisz 2 wspolczynniki rownania liniowego 1 i wyraz wolny: \n");
    int a1, b1, a2, b2, w1, w2;
    scanf("%d %d %d", &a1, &b1, &w1);
    printf("Wpisz 2 wspolczynniki rownania liniowego 2 i wyraz wolny: \n");
    scanf("%d %d %d", &a2, &b2, &w2);
    int det = (a1 * b2) - (b1* a2);
    int detx = (w1*b2) - (b1*w2);
    int dety = (a1*w2)-(w1*a2);

    if(det == 0 && (detx == 0 || dety == 0))
    {
        printf("Uklad sprzeczny");
    }
    else if(det == 0 && detx == 0 && dety == 0)
    {
        printf("Uklad nieoznaczony: nieskonczenie wiele rozwiazan");
    }
    else
    {
        int x = detx/det;
        int y = dety/det;

        printf("x = %d, y = %d", x, y);
    }
}
