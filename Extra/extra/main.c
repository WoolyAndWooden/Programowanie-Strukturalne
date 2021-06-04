#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void * dodajw(struct element * Lista, struct element * elem, int a)
{
    struct element * temp = malloc(sizeof(struct element));
    temp->i = a;
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

void showh(struct element * Lista)
{
    //struct element * temp = Lista;
    printf("Glowa, adres: %p\n", Lista);
    Lista = Lista->next;
    if(Lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d, adres: %p\n", Lista->i, Lista);
        Lista = Lista->next;
    }
    printf("----\n");
}

void show(struct element * Lista)
{
    if(Lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(Lista!=NULL)
    {
        printf("%d, adres: %p\n", Lista->i, Lista);
        Lista = Lista->next;
    }
    printf("----\n");
}

struct element * foo(struct element * head, struct element * headless)
{
    struct element * Lista = malloc(sizeof(struct element));
    Lista = head->next;
    struct element * temp = Lista;


    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = headless;

    return Lista;
};

int main()
{
    //Stworzenie list
    //Z głową
    struct element * ListaHead = malloc(sizeof(struct element));
    ListaHead->next = NULL;
    dodajw(ListaHead, ListaHead, 1);
    dodajw(ListaHead, ListaHead->next, 7);
    showh(ListaHead);

    struct element * ListaHeadless = malloc(sizeof(struct element));
    ListaHeadless->next = NULL;
    ListaHeadless->i = 5;
    dodajw(ListaHeadless, ListaHeadless, -2);
    dodajw(ListaHeadless, ListaHeadless->next, 34);
    show(ListaHeadless);

    struct element * Lista = foo(ListaHead, ListaHeadless);
    ListaHead=NULL;
    ListaHeadless=NULL;

    free(ListaHead);
    free(ListaHeadless);

    show(ListaHead);
    show(ListaHeadless);
    show(Lista);
    return 0;
}
