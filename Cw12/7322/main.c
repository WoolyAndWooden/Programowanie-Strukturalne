#include <stdio.h>
#include <stdlib.h>
#include<math.h>

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
    Listah->next = crelem(2, 6, 9);
    showh(Listah);
    Listah = poleh(Listah);
    showh(Listah);
    return 0;
}
