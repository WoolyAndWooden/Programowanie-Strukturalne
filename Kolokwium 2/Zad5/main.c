#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node* next;
};

struct node * dodaj(struct node * Lista, struct node * elem, int a)
{
    struct node * temp = malloc(sizeof(struct node));
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

void show(struct node * Lista)
{
    struct node * temp = Lista;
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

void showhex(struct node * Lista, int a)
{
    struct node * temp = Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        if(temp->x == a)
            printf("%p\n", *temp);
        temp = temp->next;
    }
    printf("----\n");
}
int main()
{
    struct node * Lista = malloc(sizeof(struct node));
    Lista->x = 5;
    Lista->next=NULL;
    show(Lista);
    Lista= dodaj(Lista, NULL, 2);
    Lista=dodaj(Lista, Lista->next, 5);
    Lista=dodaj(Lista, Lista->next->next, 3);
    show(Lista);
    showhex(Lista, 5);



}
