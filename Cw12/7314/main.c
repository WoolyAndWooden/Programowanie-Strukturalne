#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element * utworz()
{
    struct element * Lista = malloc(sizeof(struct element));
    Lista->next = NULL;
    return Lista;

}

struct element * stworz(int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->x = a;
    temp->next = NULL;
}

struct element * dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->x = a;
    temp->next = elem->next;
    elem->next = temp;
    return Lista;

}

void show(struct element * Lista)
{
    struct element * temp = Lista->next;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n", temp->x);
        temp = temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element * Lista1 = utworz();
    show(Lista1);
    Lista1->next = stworz(3);
    show(Lista1);
    Lista1 = dodajw(Lista1, Lista1, 5);
    show(Lista1);
    Lista1 = dodajw(Lista1, Lista1->next->next, -20);
    show(Lista1);
    Lista1 = dodajw(Lista1, Lista1->next->next, 20);
    show(Lista1);
    return 0;
}

