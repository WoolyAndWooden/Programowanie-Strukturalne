#include <stdio.h>
#include <stdlib.h>

struct element
{
    double x;
    struct element * next;
};

void stworz_wypelnij(struct element * Lista, unsigned int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0)
            Lista->x = i;
        else
            Lista->x = i-12;

        Lista->next = malloc(sizeof(struct element));
        Lista=Lista->next;
    }
    Lista->next = NULL;
};

void show(struct element * Lista)
{
    //struct element * temp = Lista;
    while(Lista->next != NULL)
    {
        printf("%lf\n", Lista->x);
        Lista=Lista->next;
    }
}

void foo(struct element * Lista)
{
    struct element * temp;

    while(Lista->next != NULL)
    {
        if(Lista->x < 0)
        {
            temp = Lista;
            Lista=Lista->next;
            free(temp);
        }
    }
}
int main()
{
    struct element * Lista = malloc(sizeof(struct element));
    stworz_wypelnij(Lista, 10);
    show(Lista);
    foo(Lista);
    show(Lista);
    return 0;
}
