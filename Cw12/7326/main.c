#include <stdio.h>
#include <stdlib.h>

//Z głową
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

struct element * minimum(struct element * Lista)
{
    if(Lista->next == NULL) return NULL;
    struct element * min = Lista->next;

    while(Lista->next != NULL)
    {
        Lista=Lista->next;
        if(Lista->x < min->x) min=Lista;
    }
    return min;
};

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

//Bez głowy
struct element * stworz2(int a)
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

struct element * dodajw2(struct element * Lista, struct element * elem, int a)
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

void show2(struct element * Lista)
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

struct element * minimum2(struct element * Lista)
{
    if(Lista == NULL) return NULL;
    struct element * min = Lista;

    while(Lista != NULL)
    {
        if(Lista->x < min->x) min=Lista;
        Lista=Lista->next;
    }
    return min;
};

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
    Lista1 = dodajw(Lista1, Lista1->next->next->next->next, 50);
    show(Lista1);
    struct element * min = minimum(Lista1);
    printf("%d", min->x);

    struct element * Lista2 = stworz(NULL);
    show(Lista2);
    Lista2->next = stworz2(3);
    show2(Lista2);
    Lista2 = dodajw(Lista2, Lista2, 5);
    show2(Lista2);
    Lista2 = dodajw2(Lista2, Lista2->next->next, -20);
    show2(Lista2);
    Lista2 = dodajw(Lista2, Lista2->next->next, 20);
    show2(Lista2);
    Lista2 = dodajw(Lista2, Lista2->next->next->next->next, 50);
    show(Lista2);
    struct element * min2 = minimum(Lista2);
    printf("%d", min2->x);
    return 0;
}

