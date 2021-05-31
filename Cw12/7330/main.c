#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element * stworz(int a)
{
    if(a == NULL)
    {
        struct element *temp = NULL;
    }
    else
    {
        struct element * temp = malloc(sizeof(struct element));
        temp->x = a;
        temp->next = NULL;
    }
}

struct element * dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->x = a;
    if(elem==NULL)
    {
        temp->next = Lista;
        Lista = temp;
        return Lista;
    }
    temp->next=elem->next;
    elem->next=temp;
    return Lista;

}

void show(struct element * Lista)
{
    struct element * temp = Lista;
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

struct element * doklej(struct element * Lista, struct element * Lista2)
{
    struct element * temp = Lista;
    while(temp->next!=NULL)  temp=temp->next;

    temp->next = Lista2;

    return Lista;

}


int main()
{
    struct element * Lista1 = stworz(2);
    Lista1->next = stworz(3);
    Lista1 = dodajw(Lista1, NULL, 5);
    Lista1 = dodajw(Lista1, Lista1->next->next, -20);
    Lista1 = dodajw(Lista1, Lista1->next->next, 20);
    show(Lista1);

    struct element * Lista2 = stworz(1);
    Lista2->next = stworz(4);
    Lista2 = dodajw(Lista2, NULL, 5);
    Lista2 = dodajw(Lista2, Lista2->next->next, 14);
    Lista2 = dodajw(Lista2, Lista2->next->next, 3);
    show(Lista2);
    struct element * Lista = doklej(Lista1, Lista2);
    show(Lista1);
    return 0;
}
