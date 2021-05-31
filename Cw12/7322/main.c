#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct trojkat
{
    double a;
    double b;
    double c;
    double pole;
    struct trojkat * next;
};

//Dla wersji z głową
struct trojkat * head()
{
    struct trojkat * temp = malloc(sizeof(struct trojkat));
    temp->next = NULL;
}

void showh(struct trojkat * Lista)
{
    struct trojkat * temp = Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%f, %f, %f, %f\n", temp->a, temp->b, temp->c, temp->pole);
        temp = temp->next;
    }
    printf("----\n");
}

struct trojkat * poleh(struct trojkat * Lista)
{
    struct trojkat * temp;
    temp = Lista;
    while(temp->next != NULL)
    {
        temp=temp->next;
        double p = (temp->a + temp->b + temp->c)/2;
        temp->pole = sqrt(p * (p - temp->a) * (p - temp->b) * (p- temp->c));

    }
    return Lista;

};

//Bez głowy
void show(struct trojkat * Lista)
{
    struct trojkat * temp = Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%f, %f, %f, %f\n", temp->a, temp->b, temp->c, temp->pole);
        temp = temp->next;
    }
    printf("----\n");
}

struct trojkat * pole(struct trojkat * Lista)
{
    struct trojkat * temp;
    temp = Lista;
    while(temp != NULL)
    {

        double p = (temp->a + temp->b + temp->c)/2;
        temp->pole = sqrt(p * (p - temp->a) * (p - temp->b) * (p- temp->c));
        temp=temp->next;

    }
    return Lista;

};

struct trojkat * crelem(double a, double b, double c)
{
    struct trojkat * elem = malloc(sizeof(struct trojkat));
    elem->a = a;
    elem->b = b;
    elem->c = c;
    elem->next = NULL;
    return elem;
};
int main()
{
    struct trojkat * Listah = head();
    showh(Listah);
    Listah->next = crelem(3, 4, 5);
    showh(Listah);
    Listah->next->next = crelem(2, 6, 7);
    showh(Listah);
    Listah = poleh(Listah);
    showh(Listah);

    struct trojkat * Lista = crelem(1, 2, 5);
    show(Lista);
    Lista->next = crelem(3, 4, 5);
    show(Lista);
    Lista->next->next = crelem(2, 6, 7);
    show(Lista);
    Lista = pole(Lista);
    show(Lista);
    return 0;
}
